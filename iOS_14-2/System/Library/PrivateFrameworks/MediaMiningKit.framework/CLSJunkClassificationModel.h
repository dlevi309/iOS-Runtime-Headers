/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSClassificationBasedSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSJunkClassificationModel : NSObject <CLSClassificationBasedSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _negativeNode;
	CLSSignalNode* _nonMemorableNode;
	CLSSignalNode* _poorQualityNode;
	CLSSignalNode* _textDocumentNode;
	CLSSignalNode* _tragicFailureNode;
	CLSSignalNode* _tragicFailureInternalNode;
	CLSSignalNode* _screenshotNode;
	CLSSignalNode* _badFramingNode;
	CLSSignalNode* _badLightingNode;
	CLSSignalNode* _blurryNode;
	CLSSignalNode* _foodOrDrinkNode;
	CLSSignalNode* _otherNode;
	CLSSignalNode* _medicalReferenceNode;
	CLSSignalNode* _negativeInternalNode;
	CLSSignalNode* _receiptOrDocumentNode;
	CLSSignalNode* _repairReferenceNode;
	CLSSignalNode* _shoppingReferenceNode;
	CLSSignalNode* _utilityReferenceNode;
	CLSSignalNode* _legacyNode;

}

@property (readonly) CLSSignalNode * negativeNode;                            //@synthesize negativeNode=_negativeNode - In the implementation block
@property (readonly) CLSSignalNode * nonMemorableNode;                        //@synthesize nonMemorableNode=_nonMemorableNode - In the implementation block
@property (readonly) CLSSignalNode * poorQualityNode;                         //@synthesize poorQualityNode=_poorQualityNode - In the implementation block
@property (readonly) CLSSignalNode * textDocumentNode;                        //@synthesize textDocumentNode=_textDocumentNode - In the implementation block
@property (readonly) CLSSignalNode * tragicFailureNode;                       //@synthesize tragicFailureNode=_tragicFailureNode - In the implementation block
@property (readonly) CLSSignalNode * tragicFailureInternalNode;               //@synthesize tragicFailureInternalNode=_tragicFailureInternalNode - In the implementation block
@property (readonly) CLSSignalNode * screenshotNode;                          //@synthesize screenshotNode=_screenshotNode - In the implementation block
@property (readonly) CLSSignalNode * badFramingNode;                          //@synthesize badFramingNode=_badFramingNode - In the implementation block
@property (readonly) CLSSignalNode * badLightingNode;                         //@synthesize badLightingNode=_badLightingNode - In the implementation block
@property (readonly) CLSSignalNode * blurryNode;                              //@synthesize blurryNode=_blurryNode - In the implementation block
@property (readonly) CLSSignalNode * foodOrDrinkNode;                         //@synthesize foodOrDrinkNode=_foodOrDrinkNode - In the implementation block
@property (readonly) CLSSignalNode * otherNode;                               //@synthesize otherNode=_otherNode - In the implementation block
@property (readonly) CLSSignalNode * medicalReferenceNode;                    //@synthesize medicalReferenceNode=_medicalReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * negativeInternalNode;                    //@synthesize negativeInternalNode=_negativeInternalNode - In the implementation block
@property (readonly) CLSSignalNode * receiptOrDocumentNode;                   //@synthesize receiptOrDocumentNode=_receiptOrDocumentNode - In the implementation block
@property (readonly) CLSSignalNode * repairReferenceNode;                     //@synthesize repairReferenceNode=_repairReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * shoppingReferenceNode;                   //@synthesize shoppingReferenceNode=_shoppingReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * utilityReferenceNode;                    //@synthesize utilityReferenceNode=_utilityReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * legacyNode;                              //@synthesize legacyNode=_legacyNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)currentAnalyzerVersion;
+(unsigned long long)latestVersion;
-(void)setupVersion31;
-(void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2 ;
-(CLSSignalNode *)badLightingNode;
-(CLSSignalNode *)negativeInternalNode;
-(void)setupVersion32;
-(CLSSignalNode *)legacyNode;
-(CLSSignalNode *)tragicFailureNode;
-(CLSSignalNode *)textDocumentNode;
-(id)nodeForSignalIdentifier:(unsigned long long)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(CLSSignalNode *)poorQualityNode;
-(CLSSignalNode *)receiptOrDocumentNode;
-(unsigned long long)minimumSupportedVersion;
-(CLSSignalNode *)foodOrDrinkNode;
-(CLSSignalNode *)badFramingNode;
-(CLSSignalNode *)repairReferenceNode;
-(CLSSignalNode *)blurryNode;
-(void)setupVersion40;
-(CLSSignalNode *)nonMemorableNode;
-(BOOL)isResponsibleForSignalIdentifier:(unsigned long long)arg1 ;
-(id)modelInfo;
-(unsigned long long)version;
-(CLSSignalNode *)utilityReferenceNode;
-(CLSSignalNode *)otherNode;
-(CLSSignalNode *)shoppingReferenceNode;
-(CLSSignalNode *)tragicFailureInternalNode;
-(CLSSignalNode *)screenshotNode;
-(CLSSignalNode *)negativeNode;
-(CLSSignalNode *)medicalReferenceNode;
@end

