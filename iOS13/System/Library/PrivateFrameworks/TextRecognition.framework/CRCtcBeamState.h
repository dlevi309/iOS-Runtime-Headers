/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableDictionary, NSDictionary;

@interface CRCtcBeamState : NSObject {

	NSMutableDictionary* _mutablePaths;

}

@property (nonatomic,retain) NSMutableDictionary * mutablePaths;              //@synthesize mutablePaths=_mutablePaths - In the implementation block
@property (readonly) NSDictionary * paths; 
-(id)init;
-(NSDictionary *)paths;
-(void)addPath:(id)arg1 ;
-(id)pathForString:(id)arg1 ;
-(void)kBest:(id*)arg1 discarded:(id*)arg2 k:(unsigned long long)arg3 ;
-(void)mergePathsWithTrailingWhitespaces;
-(id)sortedKeys;
-(NSMutableDictionary *)mutablePaths;
-(void)setMutablePaths:(NSMutableDictionary *)arg1 ;
@end

