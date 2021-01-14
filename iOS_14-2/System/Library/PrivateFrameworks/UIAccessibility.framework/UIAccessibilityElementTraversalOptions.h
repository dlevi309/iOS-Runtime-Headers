/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _includeAncestorsOfSelfInSiblingMatch;
	BOOL _forSpeakScreen;
	BOOL _shouldIncludeStatusBarWindow;
	long long _direction;
	/*^block*/id _leafNodePredicate;
	NSArray* _allowedViewsForTraversal;
	/*^block*/id _alternateViewChildrenHandler;

}

@property (assign,nonatomic) BOOL forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
@property (nonatomic,copy) id alternateViewChildrenHandler;                               //@synthesize alternateViewChildrenHandler=_alternateViewChildrenHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) BOOL includeWindowlessViews;                                 //@synthesize includeWindowlessViews=_includeWindowlessViews - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch;                   //@synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch - In the implementation block
@property (nonatomic,retain) NSArray * allowedViewsForTraversal;                          //@synthesize allowedViewsForTraversal=_allowedViewsForTraversal - In the implementation block
+(id)defaultVoiceOverOptions;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1 honorsGroups:(BOOL)arg2 ;
+(id)defaultMacCatalystPlatformOptions;
+(id)defaultSwitchControlOptions;
+(id)defaultSpeakScreenOptions;
+(id)options;
-(long long)direction;
-(id)init;
-(void)setDirection:(long long)arg1 ;
-(BOOL)sorted;
-(void)setLeafNodePredicate:(id)arg1 ;
-(void)setForSpeakScreen:(BOOL)arg1 ;
-(void)setShouldReturnScannerGroups:(BOOL)arg1 ;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(BOOL)arg1 ;
-(id)leafNodePredicate;
-(void)setAllowedViewsForTraversal:(NSArray *)arg1 ;
-(BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
-(BOOL)shouldReturnScannerGroups;
-(BOOL)forSpeakScreen;
-(BOOL)shouldUseAllSubviews;
-(BOOL)includeHiddenViews;
-(BOOL)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(BOOL)arg1 ;
-(void)setShouldUseAllSubviews:(BOOL)arg1 ;
-(void)setIncludeHiddenViews:(BOOL)arg1 ;
-(BOOL)includeWindowlessViews;
-(void)setIncludeWindowlessViews:(BOOL)arg1 ;
-(BOOL)includeAncestorsOfSelfInSiblingMatch;
-(void)setIncludeAncestorsOfSelfInSiblingMatch:(BOOL)arg1 ;
-(NSArray *)allowedViewsForTraversal;
-(BOOL)shouldIncludeStatusBarWindow;
-(id)alternateViewChildrenHandler;
-(void)setAlternateViewChildrenHandler:(id)arg1 ;
-(id)description;
-(void)setSorted:(BOOL)arg1 ;
@end

