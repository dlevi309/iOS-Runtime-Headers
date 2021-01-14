/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject {

	NSMutableDictionary* _stickerPackGUIDToPackMap;

}

@property (retain) NSMutableDictionary * stickerPackGUIDToPackMap;              //@synthesize stickerPackGUIDToPackMap=_stickerPackGUIDToPackMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)retrieveStickerWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_cachedPathForStickerWithProperties:(id)arg1 ;
-(BOOL)_isRecipeBasedSticker:(id)arg1 ;
-(NSMutableDictionary *)stickerPackGUIDToPackMap;
-(void)setStickerPackGUIDToPackMap:(NSMutableDictionary *)arg1 ;
@end

