/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRNSXPCListenerProtocol <NSObject>
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate; 
@required
-(void)suspend;
-(id<NRNSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithMachServiceName:(id)arg1;
-(void)invalidate;
-(void)resume;

@end

