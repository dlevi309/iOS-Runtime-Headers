/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol NSCoding;
@class NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	id<NSCoding> _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,retain,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) id<NSCoding> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(void)sendReply:(id)arg1 ;
-(id<NSCoding>)message;
-(XPCRequest *)request;
-(NSData *)data;
-(id)initWithXPCRequest:(id)arg1 ;
@end

