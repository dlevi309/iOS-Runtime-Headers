/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMTask.h>

@class NSUUID, AXMVisionPipelineContext, AXMSourceNode;

@interface _AXMVisionEngineAnalysisTask : AXMTask {

	NSUUID* _identifier;
	AXMVisionPipelineContext* _context;
	AXMSourceNode* _source;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMVisionPipelineContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXMSourceNode * source;                          //@synthesize source=_source - In the implementation block
+(id)itemWithSource:(id)arg1 context:(id)arg2 ;
-(id)initWithSource:(id)arg1 context:(id)arg2 ;
-(AXMVisionPipelineContext *)context;
-(void)setSource:(AXMSourceNode *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(AXMSourceNode *)source;
-(void)setContext:(AXMVisionPipelineContext *)arg1 ;
@end

