/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSArray;

@interface MPAVRoutingViewControllerItems : NSObject {

	NSDictionary* _routeGrouping;
	NSArray* _localDevices;
	NSArray* _headphones;
	NSArray* _speakersAndTVs;

}

@property (nonatomic,copy) NSDictionary * routeGrouping;              //@synthesize routeGrouping=_routeGrouping - In the implementation block
@property (nonatomic,copy) NSArray * localDevices;                    //@synthesize localDevices=_localDevices - In the implementation block
@property (nonatomic,copy) NSArray * headphones;                      //@synthesize headphones=_headphones - In the implementation block
@property (nonatomic,copy) NSArray * speakersAndTVs;                  //@synthesize speakersAndTVs=_speakersAndTVs - In the implementation block
-(void)setSpeakersAndTVs:(NSArray *)arg1 ;
-(NSArray *)speakersAndTVs;
-(NSArray *)headphones;
-(NSArray *)localDevices;
-(void)setRouteGrouping:(NSDictionary *)arg1 ;
-(NSDictionary *)routeGrouping;
-(void)setHeadphones:(NSArray *)arg1 ;
-(void)setLocalDevices:(NSArray *)arg1 ;
@end

