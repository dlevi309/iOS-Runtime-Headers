/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFBaseLibraryWorkflowCellMetrics.h>

@class WFFloatingViewConfiguration, UIFont, UITraitCollection, NSString;

@interface WFLibraryLayoutMetrics : NSObject <WFBaseLibraryWorkflowCellMetrics> {

	WFFloatingViewConfiguration* _floatingViewConfiguration;
	double _interitemSpacing;
	double _lineSpacing;
	UIFont* _workflowNameFont;
	UITraitCollection* _traitCollection;
	CGSize _workflowSize;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;                                  //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets sectionInset;                                            //@synthesize sectionInset=_sectionInset - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                                              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                                                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) CGSize workflowSize;                                                  //@synthesize workflowSize=_workflowSize - In the implementation block
@property (nonatomic,readonly) CGSize workflowPlusGlyphSize; 
@property (nonatomic,readonly) UIEdgeInsets workflowContentEdgeInsets; 
@property (nonatomic,readonly) UIFont * workflowNameFont;                                            //@synthesize workflowNameFont=_workflowNameFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize workflowGlyphSize; 
@property (nonatomic,readonly) unsigned long long appIconFormat; 
@property (nonatomic,readonly) WFFloatingViewConfiguration * floatingViewConfiguration;              //@synthesize floatingViewConfiguration=_floatingViewConfiguration - In the implementation block
+(id)workflowNameFontInDefaultSize;
+(id)workflowNameFontCompatibleWithTraitCollection:(id)arg1 ;
+(id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
+(id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 needsTopPadding:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineSpacing;
-(UITraitCollection *)traitCollection;
-(double)scaledValueForValue:(double)arg1 ;
-(UIEdgeInsets)sectionInset;
-(double)interitemSpacing;
-(CGSize)workflowGlyphSize;
-(unsigned long long)appIconFormat;
-(WFFloatingViewConfiguration *)floatingViewConfiguration;
-(id)initWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 needsTopPadding:(BOOL)arg4 ;
-(CGSize)workflowPlusGlyphSize;
-(UIEdgeInsets)workflowContentEdgeInsets;
-(UIEdgeInsets)scaledEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)capEdgeInsets:(UIEdgeInsets)arg1 min:(UIEdgeInsets)arg2 max:(UIEdgeInsets)arg3 ;
-(CGSize)workflowSize;
-(UIFont *)workflowNameFont;
@end

