/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OspreyRPC;
@interface OspreyService : NSObject {

	id<OspreyRPC> _channel;

}

@property (nonatomic,readonly) id<OspreyRPC> channel;              //@synthesize channel=_channel - In the implementation block
-(id<OspreyRPC>)channel;
-(id)initWithConnectionURL:(id)arg1 ;
@end

