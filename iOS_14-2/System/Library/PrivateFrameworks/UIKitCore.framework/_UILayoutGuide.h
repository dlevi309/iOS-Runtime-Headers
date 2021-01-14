/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classFallbacksForKeyedArchiver;
+(id)_horizontalLayoutGuide;
+(id)_verticalLayoutGuide;
-(void)_setHorizontal:(BOOL)arg1 ;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(NSString *)_archivedIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(BOOL)_isFloatingLayoutItem;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHorizontal;
-(void)_setAllowsArchivingAsSubview:(BOOL)arg1 ;
-(BOOL)_allowsArchivingAsSubview;
-(void)dealloc;
@end

