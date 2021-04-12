/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleHostViewControllerFactory.h>

@protocol NUArticleHostViewControllerFactory <NSObject>
@required
-(id)createArticleHostViewControllerForArticle:(id)arg1;

@end


@protocol NUArticleViewControllerFactory, NUSettings, NUErrorMessageFactory, NUArticleContentSizeManager;
@class NSString;

@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory> {

	id<NUArticleViewControllerFactory> _articleViewControllerFactory;
	id<NUSettings> _settings;
	id<NUErrorMessageFactory> _errorMessageFactory;
	id<NUArticleContentSizeManager> _contentSizeManager;

}

@property (nonatomic,readonly) id<NUArticleViewControllerFactory> articleViewControllerFactory;              //@synthesize articleViewControllerFactory=_articleViewControllerFactory - In the implementation block
@property (nonatomic,copy,readonly) id<NUSettings> settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) id<NUErrorMessageFactory> errorMessageFactory;                                //@synthesize errorMessageFactory=_errorMessageFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleContentSizeManager> contentSizeManager;                           //@synthesize contentSizeManager=_contentSizeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUSettings>)settings;
-(id)createArticleHostViewControllerForArticle:(id)arg1 ;
-(id<NUArticleViewControllerFactory>)articleViewControllerFactory;
-(id<NUErrorMessageFactory>)errorMessageFactory;
-(id<NUArticleContentSizeManager>)contentSizeManager;
-(id)initWithArticleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3 contentSizeManager:(id)arg4 ;
@end

