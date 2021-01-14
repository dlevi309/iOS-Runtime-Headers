/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/


@class SCRActivity, _DASActivity;

@interface SCRDASActivityMetadata : NSObject {

	unsigned long long _state;
	SCRActivity* _activity;
	_DASActivity* _dasActivity;

}

@property (assign,nonatomic) unsigned long long state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SCRActivity * activity;                  //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) _DASActivity * dasActivity;              //@synthesize dasActivity=_dasActivity - In the implementation block
-(SCRActivity *)activity;
-(_DASActivity *)dasActivity;
-(void)setActivity:(SCRActivity *)arg1 ;
-(id)description;
-(void)setDasActivity:(_DASActivity *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
@end

