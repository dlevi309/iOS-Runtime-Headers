/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleContentSizeManager.h>

@protocol NUArticleContentSizeManager <NSObject>
@required
-(id)contentSizeCategoryForArticle:(id)arg1;
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
-(long long)contentScaleForArticle:(id)arg1;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2;

@end


@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager> {

	FCTagSettings* _tagSettings;

}

@property (nonatomic,readonly) FCTagSettings * tagSettings;              //@synthesize tagSettings=_tagSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCTagSettings *)tagSettings;
-(id)contentSizeCategoryForArticle:(id)arg1 ;
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2 ;
-(long long)contentScaleForArticle:(id)arg1 ;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2 ;
-(id)initWithTagSettings:(id)arg1 ;
-(id)contentSizeCategoryForSize:(long long)arg1 ;
-(long long)textSizeForContentSizeCategory:(id)arg1 ;
@end

