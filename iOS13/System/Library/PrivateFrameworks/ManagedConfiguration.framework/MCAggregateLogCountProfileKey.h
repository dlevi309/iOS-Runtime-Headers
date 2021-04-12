/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCountProfileKey : MCAggregateLogKey {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)_type:(unsigned long long)arg1 ;
+(id)all;
+(id)carrier;
+(id)signed;
+(id)signedByApple;
+(id)encrypted;
+(void)updateProfileCounts;
-(id)name;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)value;
@end

