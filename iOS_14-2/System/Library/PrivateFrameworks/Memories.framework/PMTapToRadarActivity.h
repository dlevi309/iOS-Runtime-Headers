/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivity.h>

@class VEKProduction, MiroMovie, VEKResult;

@interface PMTapToRadarActivity : UIActivity {

	VEKProduction* _production;
	MiroMovie* _tapToRadarMovie;
	VEKResult* _result;

}

@property (assign,nonatomic,__weak) VEKProduction * production;               //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
@property (assign,nonatomic,__weak) VEKResult * result;                       //@synthesize result=_result - In the implementation block
-(void)setResult:(VEKResult *)arg1 ;
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(VEKProduction *)production;
-(VEKResult *)result;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(id)_returnTextDebugAsString;
-(MiroMovie *)tapToRadarMovie;
@end

