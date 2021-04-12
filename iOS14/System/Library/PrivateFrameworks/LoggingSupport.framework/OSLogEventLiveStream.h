/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFilterPredicate:(id)arg1 ;
-(NSObject*<OS_xpc_object>)diagdconn;
-(void)setDroppedEventHandler:(/*^block*/id)arg1 ;
-(void)setDiagdconn:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2 ;
-(void)_activateLiveStream;
-(id)dropnoteHandler;
-(void)setDropnoteHandler:(id)arg1 ;
-(id)initWithLiveSource:(id)arg1 ;
-(void)activate;
-(void)invalidate;
-(OSLogEventLiveSource *)source;
@end

