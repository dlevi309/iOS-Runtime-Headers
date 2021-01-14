/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUPagingFactory.h>

@class NUArticlePageFactory, NSString;

@interface NUPagingEngine : NSObject <NUPagingFactory> {

	NUArticlePageFactory* _articlePageFactory;

}

@property (nonatomic,readonly) NUArticlePageFactory * articlePageFactory;              //@synthesize articlePageFactory=_articlePageFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPagingForArticleIDs:(id)arg1 ;
-(id)paging:(id)arg1 byAddingPage:(id)arg2 afterPage:(id)arg3 ;
-(id)paging:(id)arg1 byRemovingPage:(id)arg2 ;
-(id)initWithArticlePageFactory:(id)arg1 ;
-(NUArticlePageFactory *)articlePageFactory;
@end

