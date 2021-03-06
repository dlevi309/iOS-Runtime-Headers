/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)tier;
-(unsigned)mode;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setMode:(unsigned)arg1 ;
-(id)description;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMode:(unsigned)arg1 tier:(unsigned)arg2 duplication:(unsigned)arg3 bundling:(unsigned)arg4 codecPayload:(unsigned)arg5 codecBitrate:(unsigned)arg6 ;
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

