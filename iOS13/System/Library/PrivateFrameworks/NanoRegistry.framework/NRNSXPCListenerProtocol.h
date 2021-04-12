/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRNSXPCListenerProtocol <NSObject>
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate; 
@required
-(void)invalidate;
-(id<NRNSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1;
-(void)suspend;

@end

