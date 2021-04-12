/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateLayout;
	BOOL _invalidateVerticalBumps;
	NSIndexPath* _focusedItemIndexPath;

}

@property (assign,nonatomic) BOOL invalidateLayout;                           //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL invalidateVerticalBumps;                    //@synthesize invalidateVerticalBumps=_invalidateVerticalBumps - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedItemIndexPath;              //@synthesize focusedItemIndexPath=_focusedItemIndexPath - In the implementation block
-(BOOL)invalidateLayout;
-(void)setInvalidateLayout:(BOOL)arg1 ;
-(BOOL)invalidateVerticalBumps;
-(void)setInvalidateVerticalBumps:(BOOL)arg1 ;
-(NSIndexPath *)focusedItemIndexPath;
-(void)setFocusedItemIndexPath:(NSIndexPath *)arg1 ;
@end

