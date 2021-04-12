/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UILayoutGuide.h>
#import <UIKit/UILayoutSupport.h>

@class NSLayoutYAxisAnchor, NSLayoutDimension, NSArray, NSString;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport> {

	BOOL _compatibilityGuideAllowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;

}

@property (assign,setter=_setHorizontal:,getter=_isHorizontal,nonatomic) BOOL _horizontal;                                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,setter=_setCompatibilityGuideAllowsArchivingAsSubview:,nonatomic) BOOL _compatibilityGuideAllowsArchivingAsSubview;              //@synthesize compatibilityGuideAllowsArchivingAsSubview=_compatibilityGuideAllowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;                                       //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
+(id)_verticalLayoutSpacer;
+(id)_horizontalLayoutSpacer;
-(void)dealloc;
-(double)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(NSString *)_archivedIdentifier;
-(BOOL)_isHorizontal;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(BOOL)_compatibilityGuideAllowsArchivingAsSubview;
-(void)_setCompatibilityGuideAllowsArchivingAsSubview:(BOOL)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
@end

