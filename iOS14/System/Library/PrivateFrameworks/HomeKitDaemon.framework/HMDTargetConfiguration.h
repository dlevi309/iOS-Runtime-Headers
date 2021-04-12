/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, NSString, NSArray;

@interface HMDTargetConfiguration : HMFObject {

	NSUUID* _uuid;
	NSNumber* _identifier;
	NSString* _name;
	long long _category;
	NSArray* _buttonConfiguration;

}

@property (nonatomic,readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSNumber * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSArray * buttonConfiguration;              //@synthesize buttonConfiguration=_buttonConfiguration - In the implementation block
-(NSUUID *)uuid;
-(id)init;
-(long long)category;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)buttonConfiguration;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4 ;
-(id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2 ;
-(void)setButtonConfiguration:(NSArray *)arg1 ;
@end

