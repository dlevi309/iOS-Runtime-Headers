/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSLogEventStreamBase.h>

@protocol OS_xpc_object;
@class _OSLogStreamFilter, NSObject, OSLogEventLiveSource;

@interface OSLogEventLiveStream : OSLogEventStreamBase {

	_OSLogStreamFilter* _streamFilter;
	unsigned long long _reason;
	NSObject*<OS_xpc_object> _diagdconn;
	OSLogEventLiveSource* _source;
	/*^block*/id _dropnoteHandler;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> diagdconn;              //@synthesize diagdconn=_diagdconn - In the implementation block
@property (nonatomic,copy) id dropnoteHandler;                                //@synthesize dropnoteHandler=_dropnoteHandler - In the implementation block
@property (nonatomic,readonly) OSLogEventLiveSource * source;                 //@synthesize source=_source - In the implementation block
-(void)invalidate;
-(OSLogEventLiveSource *)source;
-(void)activate;
-(void)setFilterPredicate:(id)arg1 ;
-(id)initWithLiveSource:(id)arg1 ;
-(void)setDroppedEventHandler:(/*^block*/id)arg1 ;
-(void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2 ;
-(void)_activateLiveStream;
-(NSObject*<OS_xpc_object>)diagdconn;
-(void)setDiagdconn:(NSObject*<OS_xpc_object>)arg1 ;
-(id)dropnoteHandler;
-(void)setDropnoteHandler:(id)arg1 ;
@end

