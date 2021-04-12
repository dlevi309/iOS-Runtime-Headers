/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPhotoBigAttributionViewSubclass.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@class UIImageView, UIView, UIActivityIndicatorView, MKMapItem, NSString;

@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass, MKActivityObserving> {

	UIImageView* _imageView;
	UIView* _backgroundView;
	BOOL _needsImageLoad;
	UIActivityIndicatorView* _spinner;
	long long _context;
	long long _type;
	MKMapItem* _mapItem;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) long long context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                              //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(BOOL)arg3 context:(long long)arg4 ;
-(void)didUpdateMapItem;
-(void)didUpdateAttributionViewType;
-(UIActivityIndicatorView *)spinner;
-(void)willStartAnimatingActivityIndicatorView;
-(void)didEndAnimatingActivityIndicatorView;
-(id)initWithContext:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)context;
-(MKMapItem *)mapItem;
-(void)layoutSubviews;
-(void)updateBackgroundIfNeeded;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(long long)type;
-(UIView *)contentView;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
@end

