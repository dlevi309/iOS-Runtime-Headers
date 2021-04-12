/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, NSUUID;

@interface _SFBrowserWindowStateData : NSObject {

	BOOL _isActiveDocumentValid;
	BOOL _isTabStateSuccessfullyLoaded;
	BOOL _needsQuickUpdate;
	long long _databaseID;
	NSString* _UUIDString;
	NSString* _sceneID;
	long long _type;
	long long _activeDocumentIndex;
	long long _activePrivateDocumentIndex;
	long long _legacyPlistFileVersion;

}

@property (assign,nonatomic) long long databaseID;                              //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSString * UUIDString;                             //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,retain) NSUUID * UUID; 
@property (nonatomic,retain) NSString * sceneID;                                //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long activeDocumentIndex;                     //@synthesize activeDocumentIndex=_activeDocumentIndex - In the implementation block
@property (assign,nonatomic) long long activePrivateDocumentIndex;              //@synthesize activePrivateDocumentIndex=_activePrivateDocumentIndex - In the implementation block
@property (assign,nonatomic) BOOL isActiveDocumentValid;                        //@synthesize isActiveDocumentValid=_isActiveDocumentValid - In the implementation block
@property (assign,nonatomic) BOOL isTabStateSuccessfullyLoaded;                 //@synthesize isTabStateSuccessfullyLoaded=_isTabStateSuccessfullyLoaded - In the implementation block
@property (assign,nonatomic) long long legacyPlistFileVersion;                  //@synthesize legacyPlistFileVersion=_legacyPlistFileVersion - In the implementation block
@property (nonatomic,readonly) BOOL isInDatabase; 
@property (assign,nonatomic) BOOL needsQuickUpdate;                             //@synthesize needsQuickUpdate=_needsQuickUpdate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)UUIDString;
-(NSString *)sceneID;
-(void)setSceneID:(NSString *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(id)initWithUUIDString:(id)arg1 sceneID:(id)arg2 ;
-(id)dictionaryPresentation;
-(id)initWithDictionaryPresentation:(id)arg1 ;
-(long long)activeDocumentIndex;
-(long long)activePrivateDocumentIndex;
-(long long)legacyPlistFileVersion;
-(BOOL)needsQuickUpdate;
-(BOOL)isInDatabase;
-(void)setActiveDocumentIndex:(long long)arg1 ;
-(void)setActivePrivateDocumentIndex:(long long)arg1 ;
-(BOOL)isActiveDocumentValid;
-(void)setIsActiveDocumentValid:(BOOL)arg1 ;
-(BOOL)isTabStateSuccessfullyLoaded;
-(void)setIsTabStateSuccessfullyLoaded:(BOOL)arg1 ;
-(void)setLegacyPlistFileVersion:(long long)arg1 ;
-(void)setNeedsQuickUpdate:(BOOL)arg1 ;
@end

