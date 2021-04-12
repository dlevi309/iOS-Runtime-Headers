/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)averageSize;
-(double)totalDuration;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)sizeDurationRatio;
@end

