/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/


@protocol CLKFullColorImageView <CLKMonochromeComplicationView>
@optional
+(BOOL)tritium_wantsCrossfadeAnimation;
-(void)enumerateQuadViewsWithBlock:(/*^block*/id)arg1;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;

@required
-(id)initFullColorImageViewWithDevice:(id)arg1;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;

@end

