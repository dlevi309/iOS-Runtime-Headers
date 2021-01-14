/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCapturePipeline.h>

@class NSString, BWNodeOutput;

@interface FigCaptureSinkPipeline : FigCapturePipeline {

	NSString* _sinkID;
	BWNodeOutput* _upstreamOutput;

}

@property (nonatomic,readonly) NSString * sinkID;                  //@synthesize sinkID=_sinkID - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleData; 
-(NSString *)sinkID;
-(id)initWithGraph:(id)arg1 name:(id)arg2 sinkID:(id)arg3 ;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(void)setUpstreamOutput:(id)arg1 ;
-(BOOL)discardsSampleData;
-(void)dealloc;
@end

