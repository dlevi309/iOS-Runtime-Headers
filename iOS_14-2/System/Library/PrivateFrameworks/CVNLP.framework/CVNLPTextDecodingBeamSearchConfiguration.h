/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLPTextDecodingConfiguration.h>

@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration {

	BOOL _shouldOptimizeAlignment;
	unsigned long long _beamWidth;
	unsigned long long _pathCount;
	/*^block*/id _scoringFunction;

}

@property (assign,nonatomic) unsigned long long beamWidth;              //@synthesize beamWidth=_beamWidth - In the implementation block
@property (assign,nonatomic) unsigned long long pathCount;              //@synthesize pathCount=_pathCount - In the implementation block
@property (assign,nonatomic) BOOL shouldOptimizeAlignment;              //@synthesize shouldOptimizeAlignment=_shouldOptimizeAlignment - In the implementation block
@property (nonatomic,readonly) id scoringFunction;                      //@synthesize scoringFunction=_scoringFunction - In the implementation block
-(unsigned long long)pathCount;
-(id)_initWithCommitActionBehavior:(/*^block*/id)arg1 scoringFunction:(/*^block*/id)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(BOOL)arg5 ;
-(id)initWithCommitActionBehavior:(/*^block*/id)arg1 scoringFunction:(/*^block*/id)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(BOOL)arg5 ;
-(id)initWithCommitActionBehavior:(/*^block*/id)arg1 scoringFunction:(/*^block*/id)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 ;
-(id)initWithCommitActionBehavior:(/*^block*/id)arg1 beamWidth:(unsigned long long)arg2 pathCount:(unsigned long long)arg3 shouldOptimizeAlignment:(BOOL)arg4 ;
-(unsigned long long)beamWidth;
-(void)setBeamWidth:(unsigned long long)arg1 ;
-(void)setPathCount:(unsigned long long)arg1 ;
-(BOOL)shouldOptimizeAlignment;
-(void)setShouldOptimizeAlignment:(BOOL)arg1 ;
-(id)scoringFunction;
@end

