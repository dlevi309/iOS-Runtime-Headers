/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)errorHandler;
-(BOOL)expectsResponse;
-(id)description;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

