/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)clearUpdates;
-(id)initWithFileURL:(id)arg1 ;
-(void)submitUpdate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
@end

