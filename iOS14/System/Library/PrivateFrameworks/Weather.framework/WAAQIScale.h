/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class WAAQIGradient, NSMutableArray;

@interface WAAQIScale : NSObject {

	WAAQIGradient* _gradient;
	NSMutableArray* _categories;
	NSRange _range;

}

@property (nonatomic,copy) NSMutableArray * categories;               //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) WAAQIGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
+(id)scaleForSingapore;
+(id)scaleForChina;
+(id)scaleForIndia;
+(id)scaleForHongKong;
+(id)scaleForMexico;
+(id)scaleForUnitedStates;
+(id)scaleForSouthKorea;
+(id)scaleFromScaleIdentifier:(id)arg1 fallbackCountryCode:(id)arg2 ;
+(id)scaleForEurope;
+(id)scaleForCanada;
+(id)scaleForUnitedKingdom;
-(void)setCategories:(NSMutableArray *)arg1 ;
-(void)addCategory:(id)arg1 ;
-(NSRange)range;
-(NSMutableArray *)categories;
-(id)initWithRange:(NSRange)arg1 ;
-(WAAQIGradient *)gradient;
@end

