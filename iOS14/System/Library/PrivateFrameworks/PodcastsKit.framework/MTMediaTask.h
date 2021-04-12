/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class AMSMediaTask, NSArray;

@interface MTMediaTask : NSObject {

	BOOL _charts;
	AMSMediaTask* _mediaTask;

}

@property (nonatomic,retain) AMSMediaTask * mediaTask;              //@synthesize mediaTask=_mediaTask - In the implementation block
@property (nonatomic,retain) NSArray * identifiers; 
@property (assign,nonatomic) BOOL charts;                           //@synthesize charts=_charts - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(NSArray *)identifiers;
-(BOOL)charts;
-(void)perform:(/*^block*/id)arg1 ;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)setCharts:(BOOL)arg1 ;
-(AMSMediaTask *)mediaTask;
-(void)setMediaTask:(AMSMediaTask *)arg1 ;
@end

