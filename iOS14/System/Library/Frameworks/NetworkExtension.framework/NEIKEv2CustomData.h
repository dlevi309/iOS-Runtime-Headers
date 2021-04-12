/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying> {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
-(unsigned long long)customType;
-(NSData *)customData;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setCustomData:(NSData *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

