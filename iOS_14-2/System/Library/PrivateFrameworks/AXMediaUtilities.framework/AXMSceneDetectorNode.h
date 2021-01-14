/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNSceneClassificationRequest;

@interface AXMSceneDetectorNode : AXMEvaluationNode {

	unsigned _taxonomyOptions;
	VNSceneClassificationRequest* __sceneClassificationRequest;

}

@property (setter=_setSceneClassificationRequest:,nonatomic,retain) VNSceneClassificationRequest * _sceneClassificationRequest;              //@synthesize _sceneClassificationRequest=__sceneClassificationRequest - In the implementation block
@property (assign,nonatomic) unsigned taxonomyOptions;                                                                                       //@synthesize taxonomyOptions=_taxonomyOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)possibleSceneClassifications;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTaxonomyOptions:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)taxonomyOptions;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(VNSceneClassificationRequest *)_sceneClassificationRequest;
-(void)_setSceneClassificationRequest:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
@end

