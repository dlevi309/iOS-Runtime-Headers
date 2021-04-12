/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <CFNetwork/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol {

	FCCKContentFetchOperation* _fetchOperation;

}

@property (nonatomic,retain) FCCKContentFetchOperation * fetchOperation;              //@synthesize fetchOperation=_fetchOperation - In the implementation block
+(void)unregister;
+(id)URLForRecordID:(id)arg1 fieldName:(id)arg2 ;
+(void)setupWithArticleDatabase:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)startLoading;
-(FCCKContentFetchOperation *)fetchOperation;
-(void)setFetchOperation:(FCCKContentFetchOperation *)arg1 ;
-(void)stopLoading;
@end

