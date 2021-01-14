/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SFCompanionAdvertiserDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<SFCompanionAdvertiserDelegate>)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)setSupportsStreams:(BOOL)arg1 ;
-(NSData *)serviceEndpointData;
-(void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)serviceType;
-(void)dealloc;
-(BOOL)supportsStreams;
@end

