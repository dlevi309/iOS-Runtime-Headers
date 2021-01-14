/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPhotoBigAttributionView.h>
#import <libobjc.A.dylib/MKPhotoBigAttributionViewSubclass.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface MKFirstPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {

	UIImageView* _glyphView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) UIImage * glyphImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(void)didUpdateMapItem;
-(void)didUpdateAttributionViewType;
-(void)willStartAnimatingActivityIndicatorView;
-(void)didEndAnimatingActivityIndicatorView;
-(id)initWithContext:(long long)arg1 ;
-(NSString *)titleText;
-(UIImage *)glyphImage;
-(void)_setupSubviews;
@end

