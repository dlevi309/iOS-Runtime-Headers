/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

