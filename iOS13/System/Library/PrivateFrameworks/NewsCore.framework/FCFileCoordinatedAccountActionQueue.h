/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCSyncFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject {

	FCSyncFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCSyncFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCSyncFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)setFileCoordinatedDictionary:(FCSyncFileCoordinatedDictionary *)arg1 ;
-(BOOL)readLocalDataHint;
-(BOOL)enqueueActionWithType:(long long)arg1 ;
-(id)peekAtActionTypes;
-(BOOL)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(BOOL)arg2 ;
@end

