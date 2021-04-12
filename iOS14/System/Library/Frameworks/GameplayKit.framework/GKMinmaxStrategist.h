/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMinmaxStrategist : NSObject <GKStrategist> {

	GKCMinmaxStrategist* _cppMinmax;

}

@property (assign,nonatomic) long long maxLookAheadDepth; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(long long)maxLookAheadDepth;
-(void)setMaxLookAheadDepth:(long long)arg1 ;
-(id)bestMoveForPlayer:(id)arg1 ;
-(id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2 ;
@end

