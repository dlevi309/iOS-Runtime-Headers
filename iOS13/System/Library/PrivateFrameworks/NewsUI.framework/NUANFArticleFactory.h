/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(FCArticleController *)articleController;
-(id)createArticlesForArticleIDs:(id)arg1 ;
-(id)initWithArticleController:(id)arg1 ;
@end

