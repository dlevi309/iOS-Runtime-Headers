/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCTagSettingsDelegate;
@class NSMutableDictionary, FCKeyValueStore;

@interface FCTagSettings : NSObject {

	NSMutableDictionary* _tagSettingsEntriesByTagID;
	FCKeyValueStore* _localStore;
	id<FCTagSettingsDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableDictionary * tagSettingsEntriesByTagID;              //@synthesize tagSettingsEntriesByTagID=_tagSettingsEntriesByTagID - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                 //@synthesize localStore=_localStore - In the implementation block
@property (assign,nonatomic,__weak) id<FCTagSettingsDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(id<FCTagSettingsDelegate>)delegate;
-(void)setDelegate:(id<FCTagSettingsDelegate>)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(BOOL)arg2 ;
-(id)webAccessOptedInTagIDs;
-(void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(BOOL)arg3 ;
-(id)accessTokenForTagID:(id)arg1 ;
-(id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2 ;
-(void)handleSyncWithTagSettingsRecord:(id)arg1 ;
-(void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1 ;
-(id)allTagSettingsRecordNames;
-(id)allTagSettingsRecords;
-(void)setTagSettingsEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tagSettingsEntriesByTagID;
-(void)syncForTagID:(id)arg1 ;
-(void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2 ;
-(id)fontSizeForTagID:(id)arg1 ;
-(void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2 ;
-(id)contentScaleForTagID:(id)arg1 ;
-(id)authenticatedAccessTokensByTagID;
@end

