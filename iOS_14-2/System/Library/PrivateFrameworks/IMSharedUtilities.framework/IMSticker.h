/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSURL, NSString, NSData, NSDictionary;

@interface IMSticker : NSObject {

	NSURL* _fileURL;
	NSString* _stickerGUID;
	NSString* _stickerPackGUID;
	NSString* _accessibilityLabel;
	NSString* _moodCategory;
	NSString* _stickerName;
	NSData* _recipe;
	NSString* _ballonBundleID;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,retain) NSData * recipe;                                //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,copy) NSString * ballonBundleID;                        //@synthesize ballonBundleID=_ballonBundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerGUID;                  //@synthesize stickerGUID=_stickerGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerPackGUID;              //@synthesize stickerPackGUID=_stickerPackGUID - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                    //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * moodCategory;                          //@synthesize moodCategory=_moodCategory - In the implementation block
@property (nonatomic,copy) NSString * stickerName;                           //@synthesize stickerName=_stickerName - In the implementation block
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSData *)recipe;
-(void)setRecipe:(NSData *)arg1 ;
-(id)init;
-(NSString *)stickerGUID;
-(NSString *)ballonBundleID;
-(NSURL *)fileURL;
-(id)description;
-(NSDictionary *)attributionInfo;
-(id)initWithStickerID:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6 ;
-(NSString *)stickerPackGUID;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(void)setBallonBundleID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)moodCategory;
-(void)setMoodCategory:(NSString *)arg1 ;
-(NSString *)stickerName;
-(id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(id)arg2 stickerPackBundlePath:(id)arg3 ;
-(void)setStickerName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

