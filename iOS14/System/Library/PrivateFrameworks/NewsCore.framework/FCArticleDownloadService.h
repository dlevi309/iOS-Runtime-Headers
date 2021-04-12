/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCArticleDownloadServiceType.h>

@protocol FCContentContext, FCFlintHelper;
@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType> {

	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;

}

@property (nonatomic,readonly) id<FCContentContext> context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<FCFlintHelper> flintHelper;              //@synthesize flintHelper=_flintHelper - In the implementation block
-(id)init;
-(id)fetchCachedArticleWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCContentContext>)context;
-(id)downloadArticleWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCFlintHelper>)flintHelper;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 ;
@end

