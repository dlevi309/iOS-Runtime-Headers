/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDictionaryMessageRecord : WCMessageRecord {

	/*^block*/id _responseHandler;

}

@property (copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)description;
-(id)responseHandler;
-(BOOL)expectsResponse;
-(id)initWithIdentifier:(id)arg1 responseHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

