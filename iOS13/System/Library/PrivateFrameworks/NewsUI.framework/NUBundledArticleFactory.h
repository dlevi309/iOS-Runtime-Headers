/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleFactory.h>

@class FCArticleController, NSString;

@interface NUBundledArticleFactory : NSObject <NUArticleFactory> {

	FCArticleController* _articleController;

}

@property (nonatomic,readonly) FCArticleController * articleController;              //@synthesize articleController=_articleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCArticleController *)articleController;
-(id)createArticlesForArticleIDs:(id)arg1 ;
-(id)initWithArticleController:(id)arg1 ;
@end

