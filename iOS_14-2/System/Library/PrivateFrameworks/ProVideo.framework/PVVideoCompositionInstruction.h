/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PVInstructionGraphNode, NSString;

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	SCD_Struct_PV29 m_timeRange;
	BOOL m_enablePostProcessing;
	BOOL m_containsTweening;
	NSArray* m_requiredSourceTrackIDs;
	int m_passthroughTrackID;
	PVInstructionGraphNode* m_outputIGNode;
	BOOL _isFreezeFrame;

}

@property (assign,nonatomic) SCD_Struct_PV29 timeRange; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
@property (assign,nonatomic) BOOL containsTweening; 
@property (assign,nonatomic) BOOL isFreezeFrame;                               //@synthesize isFreezeFrame=_isFreezeFrame - In the implementation block
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (nonatomic,retain) PVInstructionGraphNode * outputNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PVInstructionGraphNode *)outputNode;
-(BOOL)enablePostProcessing;
-(void)setTimeRange:(SCD_Struct_PV29)arg1 ;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(SCD_Struct_PV29)timeRange;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutputNode:(PVInstructionGraphNode *)arg1 ;
-(void)setContainsTweening:(BOOL)arg1 ;
-(void)setIsFreezeFrame:(BOOL)arg1 ;
-(BOOL)isFreezeFrame;
-(void)unloadInstructionGraphNodes;
-(void)loadInstructionGraphNodes:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)videoInstructionDescription;
@end

