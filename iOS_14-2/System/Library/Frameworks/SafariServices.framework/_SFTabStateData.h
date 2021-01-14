/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, NSData;

@interface _SFTabStateData : NSObject {

	BOOL _showingReader;
	BOOL _displayingStandaloneImage;
	BOOL _wasOpenedFromLink;
	BOOL _privateBrowsing;
	BOOL _skipUpdate;
	BOOL _skipSavingSessionState;
	int _readingListBookmarkID;
	NSString* _UUIDString;
	NSString* _title;
	NSString* _url;
	NSString* _userVisibleURL;
	long long _orderIndex;
	double _lastViewedTime;
	long long _readerViewTopScrollOffset;
	NSData* _sessionStateData;
	long long _owningBrowserWindowDatabaseID;
	NSString* _owningBrowserWindowUUIDString;
	unsigned long long _uncompressedSessionStateDataSize;

}

@property (nonatomic,retain) NSString * UUIDString;                                            //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,retain) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * url;                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * userVisibleURL;                                        //@synthesize userVisibleURL=_userVisibleURL - In the implementation block
@property (assign,nonatomic) long long orderIndex;                                             //@synthesize orderIndex=_orderIndex - In the implementation block
@property (assign,nonatomic) double lastViewedTime;                                            //@synthesize lastViewedTime=_lastViewedTime - In the implementation block
@property (assign,nonatomic) long long readerViewTopScrollOffset;                              //@synthesize readerViewTopScrollOffset=_readerViewTopScrollOffset - In the implementation block
@property (assign,nonatomic) BOOL showingReader;                                               //@synthesize showingReader=_showingReader - In the implementation block
@property (assign,nonatomic) BOOL displayingStandaloneImage;                                   //@synthesize displayingStandaloneImage=_displayingStandaloneImage - In the implementation block
@property (assign,nonatomic) BOOL wasOpenedFromLink;                                           //@synthesize wasOpenedFromLink=_wasOpenedFromLink - In the implementation block
@property (assign,nonatomic) BOOL privateBrowsing;                                             //@synthesize privateBrowsing=_privateBrowsing - In the implementation block
@property (nonatomic,retain) NSData * sessionStateData;                                        //@synthesize sessionStateData=_sessionStateData - In the implementation block
@property (assign,nonatomic) long long owningBrowserWindowDatabaseID;                          //@synthesize owningBrowserWindowDatabaseID=_owningBrowserWindowDatabaseID - In the implementation block
@property (nonatomic,copy) NSString * owningBrowserWindowUUIDString;                           //@synthesize owningBrowserWindowUUIDString=_owningBrowserWindowUUIDString - In the implementation block
@property (assign,nonatomic) BOOL skipUpdate;                                                  //@synthesize skipUpdate=_skipUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedSessionStateDataSize;              //@synthesize uncompressedSessionStateDataSize=_uncompressedSessionStateDataSize - In the implementation block
@property (nonatomic,readonly) BOOL isSessionStateDataCompressed; 
@property (nonatomic,readonly) NSData * compressedSessionStateData; 
@property (assign,nonatomic) BOOL skipSavingSessionState;                                      //@synthesize skipSavingSessionState=_skipSavingSessionState - In the implementation block
@property (assign,nonatomic) int readingListBookmarkID;                                        //@synthesize readingListBookmarkID=_readingListBookmarkID - In the implementation block
+(id)uncompressedDataWithRawData:(id)arg1 uncompressedSize:(unsigned long long)arg2 ;
-(BOOL)privateBrowsing;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)compressedSessionStateData;
-(void)_uncompressSessionStateDataIfNeeded;
-(NSString *)userVisibleURL;
-(void)setUserVisibleURL:(NSString *)arg1 ;
-(void)setOrderIndex:(long long)arg1 ;
-(double)lastViewedTime;
-(void)setLastViewedTime:(double)arg1 ;
-(long long)readerViewTopScrollOffset;
-(void)setReaderViewTopScrollOffset:(long long)arg1 ;
-(void)setShowingReader:(BOOL)arg1 ;
-(BOOL)displayingStandaloneImage;
-(void)setDisplayingStandaloneImage:(BOOL)arg1 ;
-(BOOL)wasOpenedFromLink;
-(void)setWasOpenedFromLink:(BOOL)arg1 ;
-(void)setPrivateBrowsing:(BOOL)arg1 ;
-(NSData *)sessionStateData;
-(void)setSessionStateData:(NSData *)arg1 ;
-(BOOL)skipUpdate;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(long long)owningBrowserWindowDatabaseID;
-(void)setOwningBrowserWindowDatabaseID:(long long)arg1 ;
-(NSString *)owningBrowserWindowUUIDString;
-(void)setOwningBrowserWindowUUIDString:(NSString *)arg1 ;
-(void)setSkipUpdate:(BOOL)arg1 ;
-(unsigned long long)uncompressedSessionStateDataSize;
-(void)setUncompressedSessionStateDataSize:(unsigned long long)arg1 ;
-(BOOL)skipSavingSessionState;
-(void)setSkipSavingSessionState:(BOOL)arg1 ;
-(int)readingListBookmarkID;
-(void)setReadingListBookmarkID:(int)arg1 ;
-(id)toDictionary;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)UUIDString;
-(long long)orderIndex;
-(void)setUUIDString:(NSString *)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(BOOL)isSessionStateDataCompressed;
-(BOOL)showingReader;
-(NSString *)title;
@end

