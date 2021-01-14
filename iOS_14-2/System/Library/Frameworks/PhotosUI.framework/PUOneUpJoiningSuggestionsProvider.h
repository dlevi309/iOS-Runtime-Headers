/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class NSArray;

@interface PUOneUpJoiningSuggestionsProvider : PUOneUpSuggestionsProvider {

	NSArray* _suggestionsProviders;

}

@property (nonatomic,copy,readonly) NSArray * suggestionsProviders;              //@synthesize suggestionsProviders=_suggestionsProviders - In the implementation block
-(id)init;
-(NSArray *)suggestionsProviders;
-(id)requestSuggestionForAsset:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)initWithSuggestionsProviders:(id)arg1 ;
-(BOOL)canProvideSuggestionForAsset:(id)arg1 ;
@end

