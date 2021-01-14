/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMSemanticTextFactory, AXMTextLayoutManager;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding> {

	AXMSemanticTextFactory* _semanticTextFactory;
	AXMTextLayoutManager* _textLayoutManager;

}

@property (nonatomic,retain) AXMSemanticTextFactory * semanticTextFactory;              //@synthesize semanticTextFactory=_semanticTextFactory - In the implementation block
@property (nonatomic,retain) AXMTextLayoutManager * textLayoutManager;                  //@synthesize textLayoutManager=_textLayoutManager - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(long long)recognitionLevelFromOptions:(id)arg1 ;
+(id)textDetectionLanguagesFromOptions:(id)arg1 ;
+(id)supportedDetectionLanguagesForLevel:(long long)arg1 ;
+(id)filterPreferredDetectionLanguages:(id)arg1 withSupportedDetectionLanguages:(id)arg2 ;
+(id)effectiveLanguagesFromOptions:(id)arg1 ;
+(id)title;
-(AXMSemanticTextFactory *)semanticTextFactory;
-(id)_textDetectionOptions:(id)arg1 ;
-(id)_textsForObservations:(id)arg1 ;
-(void)setSemanticTextFactory:(AXMSemanticTextFactory *)arg1 ;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)setTextLayoutManager:(AXMTextLayoutManager *)arg1 ;
-(AXMTextLayoutManager *)textLayoutManager;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
@end

