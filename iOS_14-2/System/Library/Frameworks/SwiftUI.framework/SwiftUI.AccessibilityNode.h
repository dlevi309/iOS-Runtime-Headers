/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <libobjc.A.dylib/AXContainerDataSeries.h>

@class NSString, _TtC7SwiftUI17HostingScrollView, NSArray, NSAttributedString, UIBezierPath;

@interface SwiftUI.AccessibilityNode : NSObject <AXContainerDataSeries> {

	 id;
	 version;
	 children;
	 parent;
	 viewRendererHost;
	 oldAttachmentForNotification;
	 attachmentsStorage;
	 cachedCombinedAttachment;
	 isEnabled;
	 needsUpdatePath;
	 needsGlobalFrameUpdate;
	 focusableAncestor;
	 relationshipScope;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) _TtC7SwiftUI17HostingScrollView * enclosingHostingScrollView; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSArray * accessibilityUserInputLabels; 
@property (copy,nonatomic) NSArray * accessibilityAttributedUserInputLabels; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedHint; 
@property (copy,nonatomic) NSString * accessibilityLanguage; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (assign,nonatomic) BOOL accessibilityViewIsModal; 
@property (assign,nonatomic) BOOL accessibilityElementsHidden; 
@property (assign,nonatomic) BOOL shouldGroupAccessibilityChildren; 
@property (assign,nonatomic) long long accessibilityContainerType; 
@property (retain,nonatomic) UIBezierPath * accessibilityPath; 
@property (copy,nonatomic) NSArray * accessibilityCustomActions; 
@property (readonly,nonatomic) NSArray * _accessibilityUserDefinedLinkedUIElements; 
@property (copy,nonatomic) NSString * accessibilityIdentifier; 
-(NSString *)description;
-(id)_accessibilityClassName;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityUserInputLabels:(NSArray *)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSArray *)accessibilityUserInputLabels;
-(id)init;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityAttributedUserInputLabels:(NSArray *)arg1 ;
-(void)setShouldGroupAccessibilityChildren:(BOOL)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(NSArray *)accessibilityElements;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityElementsHidden;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(NSArray *)accessibilityAttributedUserInputLabels;
-(void)setAccessibilityAttributedValue:(NSAttributedString *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)accessibilityElementDidLoseFocus;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(void)setAccessibilityElementsHidden:(BOOL)arg1 ;
-(void)setAccessibilityAttributedHint:(NSAttributedString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSAttributedString *)accessibilityAttributedValue;
-(void)setAccessibilityViewIsModal:(BOOL)arg1 ;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityPerformMagicTap;
-(NSAttributedString *)accessibilityAttributedHint;
-(void)setAccessibilityLanguage:(NSString *)arg1 ;
-(CGRect)accessibilityFrame;
-(long long)accessibilityElementCount;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(NSArray *)accessibilityCustomActions;
-(NSString *)accessibilityHint;
-(NSString *)accessibilityLanguage;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(long long)accessibilityContainerType;
-(NSString *)accessibilityIdentifier;
-(void)setAccessibilityContainerType:(long long)arg1 ;
-(_TtC7SwiftUI17HostingScrollView *)enclosingHostingScrollView;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityURL;
-(NSArray *)_accessibilityUserDefinedLinkedUIElements;
-(BOOL)_internal_handleCustomActionWithUiAction:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityRoleDescription;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(double)_accessibilityNumberValue;
-(long long)_accessibilityExpandedStatus;
-(id)_accessibilityDataSeriesName;
-(long long)_accessibilityDataSeriesType;
-(id)_accessibilityDataSeriesTitleForAxis:(long long)arg1 ;
-(BOOL)_accessibilityDataSeriesSupportsSummarization;
-(BOOL)_accessibilityDataSeriesSupportsSonification;
-(BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
-(id)_accessibilityDataSeriesValuesForAxis:(long long)arg1 ;
-(double)_accessibilityDataSeriesSonificationDuration;
-(id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1 ;
-(id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1 ;
-(id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1 ;
-(id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1 ;
-(id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(UIBezierPath *)accessibilityPath;
-(void)dealloc;
@end

