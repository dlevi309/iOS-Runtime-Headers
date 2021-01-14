/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@class GEODataSession, GEODataSessionTask, NSString;

@interface GEODataSessionWaiter : NSObject <GEODataSessionTaskDelegate> {

	GEODataSession* _session;
	GEODataSessionTask* _task;
	/*^block*/id _handler;
	id _strongReferenceToSelf;

}

@property (nonatomic,retain) GEODataSession * session;               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) GEODataSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEODataSessionTask *)task;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setTask:(GEODataSessionTask *)arg1 ;
-(GEODataSession *)session;
-(void)setSession:(GEODataSession *)arg1 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)handler;
@end

