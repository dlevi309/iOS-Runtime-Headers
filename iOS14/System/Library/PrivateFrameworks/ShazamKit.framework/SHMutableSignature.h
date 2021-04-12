/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHSignature.h>

@class AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature {

	unsigned _currentFrameCount;
	double _maximumSeconds;
	long long _clipStyle;
	AVAudioFormat* _format;
	SigX* _sigX;

}

@property (nonatomic,retain) AVAudioFormat * format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) SigX * sigX;                             //@synthesize sigX=_sigX - In the implementation block
@property (assign,nonatomic) unsigned currentFrameCount;              //@synthesize currentFrameCount=_currentFrameCount - In the implementation block
@property (nonatomic,readonly) long long clipStyle;                   //@synthesize clipStyle=_clipStyle - In the implementation block
@property (nonatomic,readonly) double maximumSeconds;                 //@synthesize maximumSeconds=_maximumSeconds - In the implementation block
+(id)entitlements;
+(BOOL)supportsSecureCoding;
-(void)setFormat:(AVAudioFormat *)arg1 ;
-(AVAudioFormat *)format;
-(id)dataRepresentation;
-(int)signatureType;
-(SigX *)sigX;
-(id)init;
-(long long)currentPosition;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(double)length;
-(void)configureWithFormat:(id)arg1 ;
-(id)generate:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSigX:(SigX *)arg1 ;
-(BOOL)append:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(id)initWithMaximumSeconds:(double)arg1 clipStyle:(long long)arg2 ;
-(BOOL)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(double)maximumSeconds;
-(void)performSignatureGenerationEntitlementCheck;
-(long long)clipStyle;
-(id)clipExcessAudio:(id)arg1 ;
-(unsigned)currentFrameCount;
-(void)setCurrentFrameCount:(unsigned)arg1 ;
-(double)secondsFromFrameCount:(unsigned)arg1 forFormat:(id)arg2 ;
@end

