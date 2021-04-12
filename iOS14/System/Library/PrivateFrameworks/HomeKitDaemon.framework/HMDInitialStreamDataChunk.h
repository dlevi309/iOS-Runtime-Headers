/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk {

	NSString* _type;

}

@property (copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
-(id)attributeDescriptions;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3 ;
@end

