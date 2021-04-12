/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject {

	NSString* _identifier;
	NSString* _name;
	HMAccessoryCategory* _category;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) long long associationOptions; 
@property (nonatomic,readonly) HMAccessoryCategory * category;              //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(HMAccessoryCategory *)category;
-(long long)associationOptions;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
@end

