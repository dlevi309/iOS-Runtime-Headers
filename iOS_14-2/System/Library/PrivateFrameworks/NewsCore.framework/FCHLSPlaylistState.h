/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSMutableDictionary, FCHLSMap, NSMutableArray, FCHLSStreamInf, FCHLSKey;

@interface FCHLSPlaylistState : NSObject {

	NSMutableDictionary* _mutableGroups;
	FCHLSMap* _currentMap;
	double _currentDuration;
	NSMutableArray* _mutableSegments;
	FCHLSStreamInf* _currentStreamInf;
	NSMutableArray* _mutableStreamInfs;
	FCHLSKey* _currentKey;
	NSMutableDictionary* _mutableSessionData;

}

@property (nonatomic,retain) NSMutableDictionary * mutableGroups;                   //@synthesize mutableGroups=_mutableGroups - In the implementation block
@property (nonatomic,retain) FCHLSMap * currentMap;                                 //@synthesize currentMap=_currentMap - In the implementation block
@property (assign,nonatomic) double currentDuration;                                //@synthesize currentDuration=_currentDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSegments;                      //@synthesize mutableSegments=_mutableSegments - In the implementation block
@property (nonatomic,retain) FCHLSStreamInf * currentStreamInf;                     //@synthesize currentStreamInf=_currentStreamInf - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableStreamInfs;                    //@synthesize mutableStreamInfs=_mutableStreamInfs - In the implementation block
@property (nonatomic,retain) FCHLSKey * currentKey;                                 //@synthesize currentKey=_currentKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableSessionData;              //@synthesize mutableSessionData=_mutableSessionData - In the implementation block
-(id)init;
-(FCHLSMap *)currentMap;
-(NSMutableDictionary *)mutableGroups;
-(NSMutableArray *)mutableStreamInfs;
-(NSMutableArray *)mutableSegments;
-(NSMutableDictionary *)mutableSessionData;
-(FCHLSStreamInf *)currentStreamInf;
-(void)setCurrentStreamInf:(FCHLSStreamInf *)arg1 ;
-(double)currentDuration;
-(void)setCurrentDuration:(double)arg1 ;
-(void)setCurrentMap:(FCHLSMap *)arg1 ;
-(void)setCurrentKey:(FCHLSKey *)arg1 ;
-(void)setMutableGroups:(NSMutableDictionary *)arg1 ;
-(void)setMutableSegments:(NSMutableArray *)arg1 ;
-(void)setMutableStreamInfs:(NSMutableArray *)arg1 ;
-(void)setMutableSessionData:(NSMutableDictionary *)arg1 ;
-(FCHLSKey *)currentKey;
@end

