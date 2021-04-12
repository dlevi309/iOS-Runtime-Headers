/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFCompanionAdvertiserDelegate;
@class NSString, NSData;

@interface SFCompanionAdvertiser : NSObject {

	BOOL _supportsStreams;
	id<SFCompanionAdvertiserDelegate> _delegate;
	NSString* _serviceType;

}

@property (assign) id<SFCompanionAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL supportsStreams;                                    //@synthesize supportsStreams=_supportsStreams - In the implementation block
@property (copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSData * serviceEndpointData; 
-(void)dealloc;
-(id<SFCompanionAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<SFCompanionAdvertiserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSString *)serviceType;
-(BOOL)supportsStreams;
-(void)setSupportsStreams:(BOOL)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(NSData *)serviceEndpointData;
-(void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

