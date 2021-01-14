/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKCompassView.h>

@protocol MKCompassView <NSObject>
@property (assign,nonatomic) double mapHeading; 
@required
-(double)mapHeading;
-(void)setMapHeading:(double)arg1;

@end


@class UIImageView, NSString;

@interface MKCompassView : UIView <MKCompassView> {

	UIImageView* _imageView;
	long long _compassViewSize;
	long long _compassViewStyle;

}

@property (assign,nonatomic) double mapHeading; 
@property (nonatomic,readonly) long long compassViewSize;               //@synthesize compassViewSize=_compassViewSize - In the implementation block
@property (nonatomic,readonly) long long compassViewStyle;              //@synthesize compassViewStyle=_compassViewStyle - In the implementation block
@property (assign,nonatomic) double yaw; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_parameterForStyle:(long long)arg1 ;
+(id)_parameterForSize:(long long)arg1 ;
-(void)_updateStyle;
-(CGSize)intrinsicContentSize;
-(double)yaw;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateLocale:(id)arg1 ;
-(void)setYaw:(double)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(double)mapHeading;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)_updateLayerForCurrentSizeAndStyle;
-(BOOL)isPointInNorthEastHalf:(CGPoint)arg1 ;
-(void)_adaptCompassStyleToUserInterfaceStyle;
-(void)setCompassViewSize:(long long)arg1 style:(long long)arg2 ;
-(void)setMapHeading:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)compassViewSize;
-(long long)compassViewStyle;
-(void)dealloc;
@end

