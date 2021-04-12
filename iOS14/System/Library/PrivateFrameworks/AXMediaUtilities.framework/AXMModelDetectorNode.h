/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isSupported;
+(id)title;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_loadModel:(id*)arg1 ;
-(BOOL)preloadModelIfNeeded:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelIdentifier;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
@end

