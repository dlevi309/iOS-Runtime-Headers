/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHSignature.h>

@class AVAudioFormat, SigX, NSMutableArray;

@interface SHMutableSignature : SHSignature {

	unsigned _currentChunkFrameCount;
	AVAudioFormat* _format;
	SigX* _sigX;
	NSMutableArray* _mutableChunks;
	long long _signatureType;

}

@property (nonatomic,retain) AVAudioFormat * format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) SigX * sigX;                                  //@synthesize sigX=_sigX - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChunks;               //@synthesize mutableChunks=_mutableChunks - In the implementation block
@property (assign,nonatomic) unsigned currentChunkFrameCount;              //@synthesize currentChunkFrameCount=_currentChunkFrameCount - In the implementation block
@property (assign,nonatomic) long long signatureType;                      //@synthesize signatureType=_signatureType - In the implementation block
-(AVAudioFormat *)format;
-(void)setFormat:(AVAudioFormat *)arg1 ;
-(long long)currentPosition;
-(long long)signatureType;
-(void)setSignatureType:(long long)arg1 ;
-(id)generate:(id*)arg1 ;
-(void)configureWithFormat:(id)arg1 ;
-(BOOL)append:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignatureType:(long long)arg1 ;
-(id)initWithID:(id)arg1 chunks:(id)arg2 time:(id)arg3 sessionStartTime:(id)arg4 ;
-(id)chunks;
-(void)setSigX:(SigX *)arg1 ;
-(unsigned)currentChunkFrameCount;
-(unsigned)maxChunkFrameCount;
-(BOOL)flowValidated:(id)arg1 error:(id*)arg2 ;
-(double)secondsFromFrameCount:(unsigned)arg1 forFormat:(id)arg2 ;
-(NSMutableArray *)mutableChunks;
-(SigX *)sigX;
-(void)setCurrentChunkFrameCount:(unsigned)arg1 ;
-(void)setMutableChunks:(NSMutableArray *)arg1 ;
@end

