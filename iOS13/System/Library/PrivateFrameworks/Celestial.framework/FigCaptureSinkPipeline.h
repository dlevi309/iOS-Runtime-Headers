/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCapturePipeline.h>

@class NSString, BWNodeOutput;

@interface FigCaptureSinkPipeline : FigCapturePipeline {

	NSString* _sinkID;
	BWNodeOutput* _upstreamOutput;

}

@property (nonatomic,readonly) NSString * sinkID;                  //@synthesize sinkID=_sinkID - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleData; 
-(void)dealloc;
-(NSString *)sinkID;
-(id)initWithGraph:(id)arg1 name:(id)arg2 sinkID:(id)arg3 ;
-(void)setUpstreamOutput:(id)arg1 ;
-(BOOL)discardsSampleData;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
@end

