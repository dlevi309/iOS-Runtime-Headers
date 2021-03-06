/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSMutableDictionary, BLHLSMap, NSMutableArray, BLHLSStreamInf, BLHLSKey;

@interface BLHLSPlaylistState : NSObject {

	NSMutableDictionary* _mutableGroups;
	BLHLSMap* _currentMap;
	double _currentDuration;
	NSMutableArray* _mutableSegments;
	BLHLSStreamInf* _currentStreamInf;
	NSMutableArray* _mutableStreamInfs;
	BLHLSKey* _currentKey;

}

@property (nonatomic,retain) NSMutableDictionary * mutableGroups;              //@synthesize mutableGroups=_mutableGroups - In the implementation block
@property (nonatomic,retain) BLHLSMap * currentMap;                            //@synthesize currentMap=_currentMap - In the implementation block
@property (assign,nonatomic) double currentDuration;                           //@synthesize currentDuration=_currentDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSegments;                 //@synthesize mutableSegments=_mutableSegments - In the implementation block
@property (nonatomic,retain) BLHLSStreamInf * currentStreamInf;                //@synthesize currentStreamInf=_currentStreamInf - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableStreamInfs;               //@synthesize mutableStreamInfs=_mutableStreamInfs - In the implementation block
@property (nonatomic,retain) BLHLSKey * currentKey;                            //@synthesize currentKey=_currentKey - In the implementation block
-(id)init;
-(BLHLSKey *)currentKey;
-(void)setCurrentMap:(BLHLSMap *)arg1 ;
-(BLHLSMap *)currentMap;
-(NSMutableDictionary *)mutableGroups;
-(NSMutableArray *)mutableStreamInfs;
-(NSMutableArray *)mutableSegments;
-(BLHLSStreamInf *)currentStreamInf;
-(void)setCurrentStreamInf:(BLHLSStreamInf *)arg1 ;
-(double)currentDuration;
-(void)setCurrentDuration:(double)arg1 ;
-(void)setCurrentKey:(BLHLSKey *)arg1 ;
-(void)setMutableGroups:(NSMutableDictionary *)arg1 ;
-(void)setMutableSegments:(NSMutableArray *)arg1 ;
-(void)setMutableStreamInfs:(NSMutableArray *)arg1 ;
@end

