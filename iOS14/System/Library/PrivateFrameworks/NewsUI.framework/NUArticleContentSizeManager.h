/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleContentSizeManager.h>

@protocol NUArticleContentSizeManager <NSObject>
@required
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
-(long long)contentScaleForArticle:(id)arg1;
-(long long)contentScaleForArticle:(id)arg1;
-(id)contentSizeCategoryForArticle:(id)arg1;
-(id)contentSizeCategoryForArticle:(id)arg1;

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
-(long long)textSizeForContentSizeCategory:(id)arg1 ;
-(void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2 ;
-(id)contentSizeCategoryForSize:(long long)arg1 ;
-(void)updateContentScale:(long long)arg1 forArticle:(id)arg2 ;
-(FCTagSettings *)tagSettings;
-(long long)contentScaleForArticle:(id)arg1 ;
-(id)contentSizeCategoryForArticle:(id)arg1 ;
-(id)initWithTagSettings:(id)arg1 ;
@end

