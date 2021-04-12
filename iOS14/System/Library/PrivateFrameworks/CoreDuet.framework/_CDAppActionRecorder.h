/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDActivityEventRecording.h>
#import <libobjc.A.dylib/_CDAppActionRecording.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording> {

	NSString* _previousActivityType;
	NSString* _previousTitle;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * previousActivityType;                 //@synthesize previousActivityType=_previousActivityType - In the implementation block
@property (nonatomic,retain) NSString * previousTitle;                        //@synthesize previousTitle=_previousTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appActionRecorder;
-(void)createConnection;
-(id)init;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)previousTitle;
-(void)recordAppAction:(id)arg1 ;
-(void)recordUserActivityEvent:(id)arg1 ;
-(void)_recordUserActivityEvent:(id)arg1 ;
-(void)recordUserActivityEvents:(id)arg1 ;
-(void)recordUserActivityEventForCollection:(id)arg1 ;
-(NSString *)previousActivityType;
-(void)setPreviousActivityType:(NSString *)arg1 ;
-(void)setPreviousTitle:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

