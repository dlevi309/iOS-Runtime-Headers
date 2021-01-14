/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {

	float _minFrequency;
	float _maxFrequency;
	NSMutableArray* _channels;
	long long _sourceType;

}

@property (nonatomic,readonly) NSArray * channels;                //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) float minFrequency;                //@synthesize minFrequency=_minFrequency - In the implementation block
@property (nonatomic,readonly) float maxFrequency;                //@synthesize maxFrequency=_maxFrequency - In the implementation block
@property (nonatomic,readonly) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)sourceType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)channels;
-(void)dealloc;
-(float)minFrequency;
-(float)maxFrequency;
-(void)checkNumChannels:(unsigned short)arg1 ;
-(void)applyChannelBins:(VCAudioPowerSpectrumEntry*)arg1 binCount:(unsigned)arg2 channelID:(unsigned short)arg3 ;
@end

