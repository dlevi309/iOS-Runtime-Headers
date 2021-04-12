/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMinmaxStrategist : NSObject <GKStrategist> {

	GKCMinmaxStrategist* _cppMinmax;

}

@property (assign,nonatomic) long long maxLookAheadDepth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
-(id)init;
-(void)dealloc;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(long long)maxLookAheadDepth;
-(void)setMaxLookAheadDepth:(long long)arg1 ;
-(id)bestMoveForPlayer:(id)arg1 ;
-(id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2 ;
@end

