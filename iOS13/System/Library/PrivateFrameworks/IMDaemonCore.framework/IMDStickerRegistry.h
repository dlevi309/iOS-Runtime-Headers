/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_cachedPathForStickerWithProperties:(id)arg1 ;
-(BOOL)_isRecipeBasedSticker:(id)arg1 ;
-(void)retrieveStickerWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)stickerPackGUIDToPackMap;
-(void)setStickerPackGUIDToPackMap:(NSMutableDictionary *)arg1 ;
@end

