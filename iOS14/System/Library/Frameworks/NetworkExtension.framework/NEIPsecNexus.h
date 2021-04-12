/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEInternetNexus.h>

@class NSArray;

@interface NEIPsecNexus : NEInternetNexus {

	NSArray* _nexusInstances;

}

@property (nonatomic,retain) NSArray * nexusInstances;              //@synthesize nexusInstances=_nexusInstances - In the implementation block
-(id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(BOOL)arg3 ;
-(BOOL)setDefaultInputHandler:(nw_protocol*)arg1 ;
-(void)setRemotePacketProxy:(id)arg1 ;
-(void)setNexusInstances:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned)arg3 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned)arg3 netifRingSize:(unsigned)arg4 kernelPipeTxRingSize:(unsigned)arg5 kernelPipeRxRingSize:(unsigned)arg6 ;
-(NSArray *)nexusInstances;
@end

