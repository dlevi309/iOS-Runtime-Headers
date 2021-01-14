/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFDAMessagePayloadFetchResponse.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {

	BOOL streaming;
	BOOL streamingDone;
	NSData* data;

}
-(id)data;
-(BOOL)streaming;
-(BOOL)streamingDone;
-(id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3 ;
@end

