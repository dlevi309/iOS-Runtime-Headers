/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent {

	NSArray* _childComponents;
	double _cycleInterval;
	BOOL _hidesPageIndicator;

}

@property (nonatomic,readonly) NSArray * childComponents;              //@synthesize childComponents=_childComponents - In the implementation block
@property (assign,nonatomic) double cycleInterval;                     //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (assign,nonatomic) BOOL hidesPageIndicator;                  //@synthesize hidesPageIndicator=_hidesPageIndicator - In the implementation block
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)metricsElementName;
-(double)cycleInterval;
-(NSArray *)childComponents;
-(void)setCycleInterval:(double)arg1 ;
-(BOOL)hidesPageIndicator;
-(void)setHidesPageIndicator:(BOOL)arg1 ;
@end

