/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWFanOutNode : BWNode {

	id* _outputsCArray;
	BOOL* _outputsDiscardsAttachedMedia;
	int _outputsCount;
	BOOL _passesThroughIrisReferenceMovieRequests;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithFanOutCount:(int)arg1 mediaType:(unsigned)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(BOOL)passesThroughIrisReferenceMovieRequests;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)setDiscardsAttachedMedia:(BOOL)arg1 forOutputIndex:(int)arg2 ;
-(void)setPassesThroughIrisReferenceMovieRequests:(BOOL)arg1 ;
@end

