/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUOneUpSuggestionsProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSMutableDictionary, NSString;

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver> {

	NSMutableDictionary* _infos;

}

@property (nonatomic,readonly) NSMutableDictionary * infos;              //@synthesize infos=_infos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleCancellationForAsset:(id)arg1 ;
-(id)init;
-(void)_handleRenderCompletionForAsset:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
-(long long)_recommendedVariationTypeForAsset:(id)arg1 ;
-(void)_handleRenderProgressChangeForInfo:(id)arg1 ;
-(NSMutableDictionary *)infos;
-(void)_handleRenderStatusChangeForAsset:(id)arg1 info:(id)arg2 ;
-(id)requestSuggestionForAsset:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(BOOL)canProvideSuggestionForAsset:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

