/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <CFNetwork/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol {

	FCCKContentFetchOperation* _fetchOperation;

}

@property (nonatomic,retain) FCCKContentFetchOperation * fetchOperation;              //@synthesize fetchOperation=_fetchOperation - In the implementation block
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)unregister;
+(id)URLForRecordID:(id)arg1 fieldName:(id)arg2 ;
+(void)setupWithArticleDatabase:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(FCCKContentFetchOperation *)fetchOperation;
-(void)setFetchOperation:(FCCKContentFetchOperation *)arg1 ;
@end

