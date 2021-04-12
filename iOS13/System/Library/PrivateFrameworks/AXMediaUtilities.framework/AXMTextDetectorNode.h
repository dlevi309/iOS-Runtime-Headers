/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMTextLayoutManager, NSArray;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding> {

	AXMTextLayoutManager* _textLayoutManager;
	NSArray* _recognitionLanguages;
	NSArray* _customWords;

}

@property (nonatomic,copy) NSArray * recognitionLanguages;              //@synthesize recognitionLanguages=_recognitionLanguages - In the implementation block
@property (nonatomic,copy) NSArray * customWords;                       //@synthesize customWords=_customWords - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
+(id)supportedRecognitionLanguagesForFlavor:(unsigned long long)arg1 textRecognitionLevel:(unsigned long long)arg2 error:(id*)arg3 ;
+(long long)_vnRequestTextRecognitionLevelForAXMTextRecognitionLevel:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)recognitionLanguages;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(NSArray *)customWords;
-(void)setCustomWords:(NSArray *)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)freeResources;
-(id)_visionTextDetectionOptionForLanguage:(id)arg1 ;
-(void)_evaluateByDetectingTextRectangles:(id)arg1 textDetectionOptions:(id)arg2 ;
-(void)_evaluateByRecognizingText:(id)arg1 textDetectionOptions:(id)arg2 ;
@end

