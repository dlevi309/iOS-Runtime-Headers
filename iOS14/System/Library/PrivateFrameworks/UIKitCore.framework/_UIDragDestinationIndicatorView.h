/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIDragDestinationIndicatorView : UIView {

	BOOL _isSourceList;
	double _scaleFactor;

}

@property (assign,nonatomic) BOOL isSourceList;                 //@synthesize isSourceList=_isSourceList - In the implementation block
@property (nonatomic,readonly) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(double)scaleFactor;
-(BOOL)isSourceList;
-(void)positionOnCellFrame:(CGRect)arg1 above:(BOOL)arg2 ;
-(void)setIsSourceList:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithSourceListStyle:(BOOL)arg1 ;
-(void)positionVerticallyCenteredInFrame:(CGRect)arg1 ;
-(void)positionHorizontallyCenteredInFrame:(CGRect)arg1 ;
@end

