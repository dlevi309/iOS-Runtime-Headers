/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSNumber;

@interface MPAVBatteryLevel : NSObject {

	NSNumber* _leftPercentage;
	NSNumber* _rightPercentage;
	NSNumber* _singlePercentage;
	NSNumber* _casePercentage;

}

@property (nonatomic,readonly) NSNumber * leftPercentage;                //@synthesize leftPercentage=_leftPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * rightPercentage;               //@synthesize rightPercentage=_rightPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * singlePercentage;              //@synthesize singlePercentage=_singlePercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * casePercentage;                //@synthesize casePercentage=_casePercentage - In the implementation block
-(NSNumber *)casePercentage;
-(NSNumber *)rightPercentage;
-(id)description;
-(NSNumber *)singlePercentage;
-(id)initWithRouteDescription:(id)arg1 ;
-(id)initWithOutputDevice:(void*)arg1 ;
-(NSNumber *)leftPercentage;
-(BOOL)isEqual:(id)arg1 ;
@end

