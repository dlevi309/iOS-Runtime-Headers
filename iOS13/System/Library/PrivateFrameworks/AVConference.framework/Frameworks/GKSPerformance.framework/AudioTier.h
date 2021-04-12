/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
*/

#import <GKSPerformance/GKSPerformance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AudioTier : NSObject <NSCopying> {

	unsigned mode;
	unsigned tier;
	unsigned duplication;
	unsigned bundling;
	unsigned codecPayload;
	unsigned codecBitrate;
	double duration;

}

@property (assign) unsigned mode; 
@property (assign) unsigned tier; 
@property (assign) unsigned duplication; 
@property (assign) unsigned bundling; 
@property (assign) unsigned codecPayload; 
@property (assign) unsigned codecBitrate; 
@property (assign) double duration; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(double)duration;
-(unsigned)mode;
-(void)setDuration:(double)arg1 ;
-(id)initWithMode:(unsigned)arg1 tier:(unsigned)arg2 duplication:(unsigned)arg3 bundling:(unsigned)arg4 codecPayload:(unsigned)arg5 codecBitrate:(unsigned)arg6 ;
-(unsigned)tier;
-(unsigned)duplication;
-(unsigned)bundling;
-(unsigned)codecPayload;
-(unsigned)codecBitrate;
-(void)setTier:(unsigned)arg1 ;
-(void)setDuplication:(unsigned)arg1 ;
-(void)setBundling:(unsigned)arg1 ;
-(void)setCodecPayload:(unsigned)arg1 ;
-(void)setCodecBitrate:(unsigned)arg1 ;
@end

