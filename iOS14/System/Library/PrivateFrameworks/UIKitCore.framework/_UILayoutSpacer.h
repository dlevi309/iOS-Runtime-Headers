/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_horizontalLayoutSpacer;
+(id)_verticalLayoutSpacer;
-(void)_setHorizontal:(BOOL)arg1 ;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(BOOL)_isHorizontal;
-(BOOL)_compatibilityGuideAllowsArchivingAsSubview;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(NSString *)_archivedIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setCompatibilityGuideAllowsArchivingAsSubview:(BOOL)arg1 ;
-(void)dealloc;
@end

