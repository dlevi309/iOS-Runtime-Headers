/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionManager.h>
#import <libobjc.A.dylib/PUForYouSuggestionActionPerformerDelegate.h>

@class NSMutableDictionary, NSString;

@interface PUForYouSuggestionsActionManager : PUAssetActionManager <PUForYouSuggestionActionPerformerDelegate> {

	NSMutableDictionary* _performersByAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)forYouSuggestionActionPerformerDidFinish:(id)arg1 ;
-(void)forYouSuggestionActionPerformerDidBegin:(id)arg1 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(BOOL)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
@end

