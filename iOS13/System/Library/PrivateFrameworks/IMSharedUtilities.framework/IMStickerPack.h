/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSMutableSet, NSString, NSURL, NSSet;

@interface IMStickerPack : NSObject {

	NSMutableSet* _stickers;
	NSString* _GUID;
	NSString* _name;
	NSURL* _displayAssetURL;
	NSURL* _fileURL;
	NSString* _appBundleIdentifier;
	NSString* _appVersion;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                  //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSSet * stickers; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * displayAssetURL;                     //@synthesize displayAssetURL=_displayAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                       //@synthesize appVersion=_appVersion - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(id)initWithGUID:(id)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6 ;
-(id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3 ;
-(NSSet *)stickers;
-(void)addSticker:(id)arg1 ;
-(id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4 ;
-(NSURL *)displayAssetURL;
-(void)setDisplayAssetURL:(NSURL *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
@end

