/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContainerUpdate.h>

@protocol CNContainerUpdate <NSObject>
@required
-(id)property;
-(void)applyToMutableContainer:(id)arg1;
-(id)value;

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
-(id)property;
-(void)applyToMutableContainer:(id)arg1 ;
-(NSString *)description;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(id)value;
@end

