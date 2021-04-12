/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMAccessoryCategory *)category;
-(NSString *)name;
-(id)description;
-(long long)associationOptions;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
@end

