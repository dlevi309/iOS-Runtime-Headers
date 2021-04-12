/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VEKResult *)result;
-(id)activityType;
-(void)setResult:(VEKResult *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(id)_returnTextDebugAsString;
-(MiroMovie *)tapToRadarMovie;
@end

