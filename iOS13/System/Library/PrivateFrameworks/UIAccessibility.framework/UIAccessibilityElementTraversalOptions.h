/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject {

	BOOL _shouldReturnScannerGroups;
	BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
	BOOL _shouldIncludeKeyboardObscuredElements;
	BOOL _shouldUseAllSubviews;
	BOOL _includeHiddenViews;
	BOOL _includeWindowlessViews;
	BOOL _sorted;
	BOOL _ignoreObscuresScreen;
	BOOL _includeDirectDescendantsOnly;
	BOOL _includeAncestorsOfSelfInSiblingMatch;
	BOOL _forSpeakScreen;
	BOOL _shouldIncludeStatusBarWindow;
	long long _direction;
	/*^block*/id _leafNodePredicate;
	NSArray* _allowedViewsForTraversal;

}

@property (assign,nonatomic) BOOL forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) BOOL includeWindowlessViews;                                 //@synthesize includeWindowlessViews=_includeWindowlessViews - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL ignoreObscuresScreen;                                   //@synthesize ignoreObscuresScreen=_ignoreObscuresScreen - In the implementation block
@property (assign,nonatomic) BOOL includeDirectDescendantsOnly;                           //@synthesize includeDirectDescendantsOnly=_includeDirectDescendantsOnly - In the implementation block
@property (assign,nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch;                   //@synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch - In the implementation block
@property (nonatomic,retain) NSArray * allowedViewsForTraversal;                          //@synthesize allowedViewsForTraversal=_allowedViewsForTraversal - In the implementation block
+(id)options;
+(id)defaultVoiceOverOptions;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1 ;
+(id)defaultSwitchControlOptions;
+(id)defaultSpeakScreenOptions;
-(id)init;
-(id)description;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setLeafNodePredicate:(id)arg1 ;
-(void)setShouldReturnScannerGroups:(BOOL)arg1 ;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(BOOL)arg1 ;
-(void)setForSpeakScreen:(BOOL)arg1 ;
-(void)setAllowedViewsForTraversal:(NSArray *)arg1 ;
-(void)setSorted:(BOOL)arg1 ;
-(BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
-(BOOL)shouldReturnScannerGroups;
-(id)leafNodePredicate;
-(BOOL)forSpeakScreen;
-(BOOL)shouldUseAllSubviews;
-(BOOL)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(BOOL)arg1 ;
-(void)setShouldUseAllSubviews:(BOOL)arg1 ;
-(BOOL)includeHiddenViews;
-(void)setIncludeHiddenViews:(BOOL)arg1 ;
-(BOOL)includeWindowlessViews;
-(void)setIncludeWindowlessViews:(BOOL)arg1 ;
-(BOOL)sorted;
-(BOOL)ignoreObscuresScreen;
-(void)setIgnoreObscuresScreen:(BOOL)arg1 ;
-(BOOL)includeDirectDescendantsOnly;
-(void)setIncludeDirectDescendantsOnly:(BOOL)arg1 ;
-(BOOL)includeAncestorsOfSelfInSiblingMatch;
-(void)setIncludeAncestorsOfSelfInSiblingMatch:(BOOL)arg1 ;
-(NSArray *)allowedViewsForTraversal;
-(BOOL)shouldIncludeStatusBarWindow;
@end

