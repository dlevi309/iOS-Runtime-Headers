/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WCMessageRecord : NSObject {

	BOOL _expectsResponse;
	NSString* _identifier;
	/*^block*/id _errorHandler;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (readonly) BOOL expectsResponse;                                  //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) id errorHandler;                                  //@synthesize errorHandler=_errorHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)errorHandler;
-(BOOL)expectsResponse;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(id)initWithIdentifier:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

