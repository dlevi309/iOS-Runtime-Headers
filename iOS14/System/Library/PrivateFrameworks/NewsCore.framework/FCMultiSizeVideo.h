/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FCMultiSizeVideo : NSObject <NSCopying> {

	NSURL* _small;
	NSURL* _large;

}

@property (nonatomic,readonly) NSURL * small;              //@synthesize small=_small - In the implementation block
@property (nonatomic,readonly) NSURL * large;              //@synthesize large=_large - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithSmallVideoURL:(id)arg1 largeVideoURL:(id)arg2 ;
-(id)init;
-(NSURL *)small;
-(unsigned long long)hash;
-(NSURL *)large;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

