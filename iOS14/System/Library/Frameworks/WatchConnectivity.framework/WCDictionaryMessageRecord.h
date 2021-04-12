/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDictionaryMessageRecord : WCMessageRecord {

	/*^block*/id _responseHandler;

}

@property (copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(BOOL)expectsResponse;
-(id)responseHandler;
-(id)description;
-(id)initWithIdentifier:(id)arg1 responseHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

