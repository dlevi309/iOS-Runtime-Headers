/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk {

	NSString* _type;

}

@property (copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(id)attributeDescriptions;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3 ;
@end

