/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWFanOutNode : BWNode {

	id* _outputsCArray;
	BOOL* _outputsDiscardsAttachedMedia;
	int _outputsCount;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)setDiscardsAttachedMedia:(BOOL)arg1 forOutputIndex:(int)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)makeCurrentConfigurationLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)initWithFanOutCount:(int)arg1 mediaType:(unsigned)arg2 ;
-(id)nodeType;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)dealloc;
@end

