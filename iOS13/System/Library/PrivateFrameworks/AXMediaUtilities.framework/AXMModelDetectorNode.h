/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNCoreMLModel, NSURL, NSString;

@interface AXMModelDetectorNode : AXMEvaluationNode {

	VNCoreMLModel* _model;
	NSURL* _modelURL;

}

@property (nonatomic,retain) NSURL * modelURL;                          //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) NSString * modelIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelIdentifier;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(BOOL)_loadModel:(id*)arg1 ;
-(BOOL)preloadModelIfNeeded:(id*)arg1 ;
@end

