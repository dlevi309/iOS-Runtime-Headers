/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding> {

	BOOL _downloaded;
	unsigned long long _size;
	double _duration;

}

@property (nonatomic,readonly) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded;              //@synthesize downloaded=_downloaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDownloaded;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSize:(unsigned long long)arg1 duration:(double)arg2 downloaded:(BOOL)arg3 ;
@end

