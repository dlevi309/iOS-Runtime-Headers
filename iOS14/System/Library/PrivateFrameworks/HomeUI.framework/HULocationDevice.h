/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HULocationDevice : NSObject <NAIdentifiable> {

	BOOL _currentDevice;
	NSString* _identifier;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (getter=isCurrentDevice,nonatomic,readonly) BOOL currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isCurrentDevice;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 currentDevice:(BOOL)arg3 ;
-(id)initWithHMDevice:(id)arg1 ;
-(id)initWithFMFDevice:(id)arg1 ;
@end

