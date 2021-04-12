/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UILayoutSupport.h>

@class NSArray, NSString, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface _UILayoutGuide : UIView <UILayoutSupport> {

	BOOL _allowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;
	NSString* _archivedIdentifier;

}

@property (assign,setter=_setHorizontal:,getter=isHorizontal,nonatomic) BOOL _horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier;                                 //@synthesize archivedIdentifier=_archivedIdentifier - In the implementation block
@property (assign,setter=_setAllowsArchivingAsSubview:,nonatomic) BOOL _allowsArchivingAsSubview;                         //@synthesize allowsArchivingAsSubview=_allowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;              //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
+(id)classFallbacksForKeyedArchiver;
+(id)_verticalLayoutGuide;
+(id)_horizontalLayoutGuide;
-(void)dealloc;
-(double)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(NSString *)_archivedIdentifier;
-(BOOL)isHorizontal;
-(id)_layoutVariablesWithAmbiguousValue;
-(BOOL)_isFloatingLayoutItem;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
-(BOOL)_allowsArchivingAsSubview;
-(void)_setAllowsArchivingAsSubview:(BOOL)arg1 ;
@end

