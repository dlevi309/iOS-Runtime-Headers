/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSDictionary, NSArray;

@interface MRURoutingViewControllerItems : NSObject {

	NSDictionary* _routeGrouping;
	NSArray* _localDevicesAndHeadphones;
	NSArray* _speakersAndTVs;

}

@property (nonatomic,copy) NSDictionary * routeGrouping;                     //@synthesize routeGrouping=_routeGrouping - In the implementation block
@property (nonatomic,copy) NSArray * localDevicesAndHeadphones;              //@synthesize localDevicesAndHeadphones=_localDevicesAndHeadphones - In the implementation block
@property (nonatomic,copy) NSArray * speakersAndTVs;                         //@synthesize speakersAndTVs=_speakersAndTVs - In the implementation block
-(void)setSpeakersAndTVs:(NSArray *)arg1 ;
-(NSArray *)speakersAndTVs;
-(void)setRouteGrouping:(NSDictionary *)arg1 ;
-(NSDictionary *)routeGrouping;
-(NSArray *)localDevicesAndHeadphones;
-(void)setLocalDevicesAndHeadphones:(NSArray *)arg1 ;
@end

