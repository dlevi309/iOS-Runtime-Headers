/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@class UITraitCollection;

@interface PKExtendedTraitCollection : NSObject {

	long long _layoutSizeClass;
	long long _layoutSizeSubclass;
	long long _userInterfaceIdiom;
	long long _userInterfaceStyle;
	double _displayScale;
	UITraitCollection* _traitCollectionForMapKit;

}

@property (assign,nonatomic) long long layoutSizeClass;                                 //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,nonatomic) long long layoutSizeSubclass;                              //@synthesize layoutSizeSubclass=_layoutSizeSubclass - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                              //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,nonatomic) double displayScale;                                       //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollectionForMapKit;              //@synthesize traitCollectionForMapKit=_traitCollectionForMapKit - In the implementation block
-(id)description;
-(long long)userInterfaceIdiom;
-(long long)userInterfaceStyle;
-(double)displayScale;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)setTraitCollectionForMapKit:(UITraitCollection *)arg1 ;
-(void)setLayoutSizeSubclass:(long long)arg1 ;
-(void)setLayoutSizeClass:(long long)arg1 ;
-(long long)layoutSizeClass;
-(long long)layoutSizeSubclass;
-(UITraitCollection *)traitCollectionForMapKit;
@end

