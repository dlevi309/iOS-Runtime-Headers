/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding> {

	unsigned long long _totalSize;
	double _totalDuration;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,nonatomic) double totalDuration;                      //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) unsigned long long count;                  //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)totalDuration;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)setTotalDuration:(double)arg1 ;
-(id)description;
-(unsigned long long)totalSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)sizeDurationRatio;
-(unsigned long long)averageSize;
@end

