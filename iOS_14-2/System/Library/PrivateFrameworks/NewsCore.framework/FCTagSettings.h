/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)syncForTagID:(id)arg1 ;
-(void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(BOOL)arg3 ;
-(id<FCTagSettingsDelegate>)delegate;
-(void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2 ;
-(id)accessTokenForTagID:(id)arg1 ;
-(id)allTagSettingsRecords;
-(NSMutableDictionary *)tagSettingsEntriesByTagID;
-(id)allTagSettingsRecordNames;
-(void)setDelegate:(id<FCTagSettingsDelegate>)arg1 ;
-(id)contentScaleForTagID:(id)arg1 ;
-(void)setTagSettingsEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)webAccessOptedInTagIDs;
-(void)handleSyncWithTagSettingsRecord:(id)arg1 ;
-(void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1 ;
-(id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2 ;
-(id)fontSizeForTagID:(id)arg1 ;
-(void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(BOOL)arg2 ;
-(id)authenticatedAccessTokensByTagID;
-(void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2 ;
@end

