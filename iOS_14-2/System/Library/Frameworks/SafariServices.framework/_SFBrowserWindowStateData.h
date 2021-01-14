/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)UUID;
-(void)setSceneID:(NSString *)arg1 ;
-(long long)legacyPlistFileVersion;
-(void)setActivePrivateDocumentIndex:(long long)arg1 ;
-(BOOL)isActiveDocumentValid;
-(id)debugDescription;
-(BOOL)needsQuickUpdate;
-(void)setType:(long long)arg1 ;
-(BOOL)isTabStateSuccessfullyLoaded;
-(void)setIsTabStateSuccessfullyLoaded:(BOOL)arg1 ;
-(void)setActiveDocumentIndex:(long long)arg1 ;
-(BOOL)isInDatabase;
-(id)dictionaryPresentation;
-(void)setLegacyPlistFileVersion:(long long)arg1 ;
-(void)setIsActiveDocumentValid:(BOOL)arg1 ;
-(void)setNeedsQuickUpdate:(BOOL)arg1 ;
-(id)initWithUUIDString:(id)arg1 sceneID:(id)arg2 ;
-(long long)type;
-(long long)activeDocumentIndex;
-(id)initWithDictionaryPresentation:(id)arg1 ;
-(NSString *)UUIDString;
-(void)setDatabaseID:(long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(long long)databaseID;
-(void)setUUIDString:(NSString *)arg1 ;
-(long long)activePrivateDocumentIndex;
-(id)initWithSQLiteRow:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sceneID;
@end

