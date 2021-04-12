/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIFocusSystem;

@interface _UIFocusRegionMapSnapshotRequest : NSObject <NSCopying> {

	BOOL _includeFocusGuides;
	BOOL _includeFocusContainerGuides;
	BOOL _clipToSnapshotRect;
	UIView* _rootView;
	UIFocusSystem* _focusSystem;
	unsigned long long _focusHeading;
	UIView* _focusableRegionAncestorView;
	CGRect _snapshotRect;
	CGRect _viewSearchRect;
	CGRect _focusedRect;
	CGRect _visualRepresentationMinimumArea;

}

@property (assign,nonatomic,__weak) UIView * rootView;                                 //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,retain) UIFocusSystem * focusSystem;                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,nonatomic) CGRect snapshotRect;                                      //@synthesize snapshotRect=_snapshotRect - In the implementation block
@property (assign,nonatomic) CGRect viewSearchRect;                                    //@synthesize viewSearchRect=_viewSearchRect - In the implementation block
@property (assign,nonatomic) CGRect focusedRect;                                       //@synthesize focusedRect=_focusedRect - In the implementation block
@property (assign,nonatomic) unsigned long long focusHeading;                          //@synthesize focusHeading=_focusHeading - In the implementation block
@property (assign,nonatomic) BOOL includeFocusGuides;                                  //@synthesize includeFocusGuides=_includeFocusGuides - In the implementation block
@property (assign,nonatomic) BOOL includeFocusContainerGuides;                         //@synthesize includeFocusContainerGuides=_includeFocusContainerGuides - In the implementation block
@property (assign,nonatomic) BOOL clipToSnapshotRect;                                  //@synthesize clipToSnapshotRect=_clipToSnapshotRect - In the implementation block
@property (assign,nonatomic,__weak) UIView * focusableRegionAncestorView;              //@synthesize focusableRegionAncestorView=_focusableRegionAncestorView - In the implementation block
@property (assign,nonatomic) CGRect visualRepresentationMinimumArea;                   //@synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea - In the implementation block
+(id)requestWithRootView:(id)arg1 focusSystem:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFocusSystem *)focusSystem;
-(unsigned long long)focusHeading;
-(UIView *)rootView;
-(void)setSnapshotRect:(CGRect)arg1 ;
-(void)setViewSearchRect:(CGRect)arg1 ;
-(void)setFocusedRect:(CGRect)arg1 ;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(id)takeSnapshot;
-(CGRect)snapshotRect;
-(void)setFocusableRegionAncestorView:(UIView *)arg1 ;
-(void)setIncludeFocusContainerGuides:(BOOL)arg1 ;
-(void)setClipToSnapshotRect:(BOOL)arg1 ;
-(id)initWithRootView:(id)arg1 focusSystem:(id)arg2 ;
-(void)setRootView:(UIView *)arg1 ;
-(void)setFocusSystem:(UIFocusSystem *)arg1 ;
-(CGRect)viewSearchRect;
-(CGRect)focusedRect;
-(BOOL)includeFocusGuides;
-(void)setIncludeFocusGuides:(BOOL)arg1 ;
-(BOOL)includeFocusContainerGuides;
-(BOOL)clipToSnapshotRect;
-(UIView *)focusableRegionAncestorView;
-(CGRect)visualRepresentationMinimumArea;
-(void)setVisualRepresentationMinimumArea:(CGRect)arg1 ;
@end

