/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned char)identifier;
-(id)shortDescription;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)buttonName;
@end

