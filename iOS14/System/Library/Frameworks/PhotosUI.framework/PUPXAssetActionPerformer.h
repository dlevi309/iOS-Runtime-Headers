/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionPerformer.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>

@class PXAssetActionPerformer, NSString;

@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate> {

	PXAssetActionPerformer* _underlyingActionPerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithUnderlyingActionPerformer:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(unsigned long long)state;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3 ;
@end

