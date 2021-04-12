/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContainerUpdate.h>

@protocol CNContainerUpdate <NSObject>
@required
-(id)value;
-(id)property;
-(void)applyToMutableContainer:(id)arg1;

@end


@class CNContainerPropertyDescription, NSString;

@interface CNContainerUpdate : NSObject <CNContainerUpdate> {

	CNContainerPropertyDescription* _property;
	id _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateWithValue:(id)arg1 property:(id)arg2 ;
-(NSString *)description;
-(id)value;
-(id)property;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(void)applyToMutableContainer:(id)arg1 ;
@end

