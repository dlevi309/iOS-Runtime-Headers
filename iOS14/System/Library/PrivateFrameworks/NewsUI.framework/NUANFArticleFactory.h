/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleFactory.h>

@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject <NUArticleFactory> {

	long long _qualityOfService;
	long long _relativePriority;
	FCArticleController* _articleController;

}

@property (nonatomic,readonly) FCArticleController * articleController;              //@synthesize articleController=_articleController - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) long long relativePriority;                             //@synthesize relativePriority=_relativePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQualityOfService:(long long)arg1 ;
-(void)setRelativePriority:(long long)arg1 ;
-(long long)relativePriority;
-(FCArticleController *)articleController;
-(long long)qualityOfService;
-(id)createArticlesForArticleIDs:(id)arg1 ;
-(id)createArticleForHeadline:(id)arg1 ;
-(id)initWithArticleController:(id)arg1 ;
@end

