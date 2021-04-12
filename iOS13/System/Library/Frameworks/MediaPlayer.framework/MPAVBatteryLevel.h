/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithRouteDescription:(id)arg1 ;
-(id)initWithOutputDevice:(void*)arg1 ;
-(NSNumber *)leftPercentage;
-(NSNumber *)rightPercentage;
-(NSNumber *)singlePercentage;
-(NSNumber *)casePercentage;
@end

