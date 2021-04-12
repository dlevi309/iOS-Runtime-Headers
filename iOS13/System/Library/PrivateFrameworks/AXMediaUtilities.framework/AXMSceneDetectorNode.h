/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)title;
+(BOOL)isSupported;
+(id)possibleSceneClassifications;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(void)setTaxonomyOptions:(unsigned)arg1 ;
-(VNSceneClassificationRequest *)_sceneClassificationRequest;
-(void)_setSceneClassificationRequest:(id)arg1 ;
-(unsigned)taxonomyOptions;
@end

