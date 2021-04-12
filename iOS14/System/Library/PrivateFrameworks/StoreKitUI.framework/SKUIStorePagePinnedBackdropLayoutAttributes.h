/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backdropColor;
	NSString* _backdropGroupName;
	long long _backdropStyle;
	BOOL _hidesBackdropView;
	double _transitionProgress;

}

@property (nonatomic,retain) UIColor * backdropColor;                 //@synthesize backdropColor=_backdropColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                 //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesBackdropView;                  //@synthesize hidesBackdropView=_hidesBackdropView - In the implementation block
@property (assign,nonatomic) double transitionProgress;               //@synthesize transitionProgress=_transitionProgress - In the implementation block
-(double)transitionProgress;
-(NSString *)backdropGroupName;
-(unsigned long long)hash;
-(void)setTransitionProgress:(double)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)backdropStyle;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBackdropStyle:(long long)arg1 ;
-(void)setHidesBackdropView:(BOOL)arg1 ;
-(void)setBackdropColor:(UIColor *)arg1 ;
-(BOOL)hidesBackdropView;
-(UIColor *)backdropColor;
@end

