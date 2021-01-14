/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSMutableDictionary, NSDictionary;

@interface CVNLPCTCBeamState : NSObject {

	NSMutableDictionary* _mutablePaths;

}

@property (nonatomic,retain) NSMutableDictionary * mutablePaths;              //@synthesize mutablePaths=_mutablePaths - In the implementation block
@property (readonly) NSDictionary * paths; 
-(NSDictionary *)paths;
-(id)init;
-(void)addPath:(id)arg1 ;
-(id)pathForString:(id)arg1 ;
-(id)sortedKeys;
-(void)kBest:(id*)arg1 discarded:(id*)arg2 k:(unsigned long long)arg3 shouldUpdateLMState:(BOOL)arg4 ;
-(void)mergePathsWithTrailingWhitespaces;
-(NSMutableDictionary *)mutablePaths;
-(void)setMutablePaths:(NSMutableDictionary *)arg1 ;
@end

