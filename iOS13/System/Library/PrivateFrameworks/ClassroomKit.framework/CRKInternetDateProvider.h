/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/CRKInternetDateFetching.h>

@class NSURLSession, NSMutableDictionary, NSString;

@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching> {

	NSURLSession* _session;
	NSMutableDictionary* _completionHandlerTable;

}

@property (nonatomic,retain) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlerTable;              //@synthesize completionHandlerTable=_completionHandlerTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)fetchInternetDateWithCompletion:(/*^block*/id)arg1 ;
-(void)storeCompletionHandler:(/*^block*/id)arg1 forTask:(id)arg2 ;
-(void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3 ;
-(void)internetDateRequestDidReceiveTask:(id)arg1 ;
-(NSMutableDictionary *)completionHandlerTable;
-(void)setCompletionHandlerTable:(NSMutableDictionary *)arg1 ;
@end

