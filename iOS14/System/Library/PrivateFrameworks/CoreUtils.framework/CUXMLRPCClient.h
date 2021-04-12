/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSURLSession, NSObject, NSString;

@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate> {

	NSMutableDictionary* _tasks;
	LogCategory* _ucat;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_activate;
-(void)requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id*)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)_requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)_handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 identifier:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

