/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying> {

	BOOL __treatLeadingHiddenAsOverlaps;
	BOOL __treatTrailingHiddenAsOverlaps;
	double _leadingWidth;
	double _trailingWidth;
	double _leadingDragOffset;
	double _trailingDragOffset;
	UISlidingBarConfiguration* _configuration;
	double __leadingOverlayWidth;
	double __trailingOverlayWidth;
	double __keyboardAdjustment;
	long long __collapsedState;

}

@property (assign,nonatomic) double leadingWidth;                                                                        //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;                                                                       //@synthesize trailingWidth=_trailingWidth - In the implementation block
@property (assign,nonatomic) double leadingDragOffset;                                                                   //@synthesize leadingDragOffset=_leadingDragOffset - In the implementation block
@property (assign,nonatomic) double trailingDragOffset;                                                                  //@synthesize trailingDragOffset=_trailingDragOffset - In the implementation block
@property (nonatomic,retain) UISlidingBarConfiguration * configuration;                                                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,setter=_setLeadingOverlayWidth:,nonatomic) double _leadingOverlayWidth;                                //@synthesize _leadingOverlayWidth=__leadingOverlayWidth - In the implementation block
@property (assign,setter=_setTreatLeadingHiddenAsOverlaps:,nonatomic) BOOL _treatLeadingHiddenAsOverlaps;                //@synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps - In the implementation block
@property (assign,setter=_setTrailingOverlayWidth:,nonatomic) double _trailingOverlayWidth;                              //@synthesize _trailingOverlayWidth=__trailingOverlayWidth - In the implementation block
@property (assign,setter=_setTreatTrailingHiddenAsOverlaps:,nonatomic) BOOL _treatTrailingHiddenAsOverlaps;              //@synthesize _treatTrailingHiddenAsOverlaps=__treatTrailingHiddenAsOverlaps - In the implementation block
@property (assign,nonatomic) double _keyboardAdjustment;                                                                 //@synthesize _keyboardAdjustment=__keyboardAdjustment - In the implementation block
@property (assign,setter=_setCollapsedState:,nonatomic) long long _collapsedState;                                       //@synthesize _collapsedState=__collapsedState - In the implementation block
@property (nonatomic,readonly) BOOL leadingOverlapsMain; 
@property (nonatomic,readonly) BOOL trailingOverlapsMain; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (nonatomic,readonly) BOOL isLeadingVisible; 
@property (nonatomic,readonly) BOOL isTrailingVisible; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(BOOL)isCollapsed;
-(BOOL)leadingOverlapsMain;
-(void)setLeadingWidth:(double)arg1 ;
-(double)leadingWidth;
-(double)trailingWidth;
-(void)setTrailingWidth:(double)arg1 ;
-(id)stateRequest;
-(void)_setCollapsedState:(long long)arg1 ;
-(void)set_keyboardAdjustment:(double)arg1 ;
-(void)_setLeadingOverlayWidth:(double)arg1 ;
-(void)_setTrailingOverlayWidth:(double)arg1 ;
-(void)_setTreatLeadingHiddenAsOverlaps:(BOOL)arg1 ;
-(void)_setTreatTrailingHiddenAsOverlaps:(BOOL)arg1 ;
-(BOOL)_leadingEntirelyOverlapsMain;
-(BOOL)_trailingEntirelyOverlapsMain;
-(double)_leadingOverlayWidth;
-(double)_trailingOverlayWidth;
-(void)setLeadingDragOffset:(double)arg1 ;
-(void)setTrailingDragOffset:(double)arg1 ;
-(long long)_collapsedState;
-(double)_keyboardAdjustment;
-(BOOL)trailingOverlapsMain;
-(id)_interactiveStateRequest;
-(double)leadingDragOffset;
-(double)trailingDragOffset;
-(BOOL)_treatLeadingHiddenAsOverlaps;
-(BOOL)_treatTrailingHiddenAsOverlaps;
-(double)_absoluteDistanceFromRequest:(id)arg1 ;
-(BOOL)_shouldUseSlidingBars;
-(BOOL)matchesRequest:(id)arg1 ;
-(double)_distanceFromRequest:(id)arg1 ;
-(BOOL)isLeadingVisible;
-(BOOL)isTrailingVisible;
@end

