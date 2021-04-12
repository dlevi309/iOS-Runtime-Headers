/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUPagingFactory.h>

@class NUArticlePageFactory, NUWelcomeToNewsPageFactory, NSString;

@interface NUPagingEngine : NSObject <NUPagingFactory> {

	NUArticlePageFactory* _articlePageFactory;
	NUWelcomeToNewsPageFactory* _welcomeToNewsPageFactory;

}

@property (nonatomic,readonly) NUArticlePageFactory * articlePageFactory;                          //@synthesize articlePageFactory=_articlePageFactory - In the implementation block
@property (nonatomic,readonly) NUWelcomeToNewsPageFactory * welcomeToNewsPageFactory;              //@synthesize welcomeToNewsPageFactory=_welcomeToNewsPageFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPagingForArticleIDs:(id)arg1 ;
-(id)paging:(id)arg1 byAddingPage:(id)arg2 afterPage:(id)arg3 ;
-(id)paging:(id)arg1 byRemovingPage:(id)arg2 ;
-(id)initWithArticlePageFactory:(id)arg1 welcomeToNewsPageFactory:(id)arg2 ;
-(NUArticlePageFactory *)articlePageFactory;
-(NUWelcomeToNewsPageFactory *)welcomeToNewsPageFactory;
@end

