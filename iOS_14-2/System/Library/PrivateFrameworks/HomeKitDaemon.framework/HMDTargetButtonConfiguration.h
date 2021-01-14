/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject {

	unsigned char _identifier;
	long long _type;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
-(id)init;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)shortDescription;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(unsigned char)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)buttonName;
@end

