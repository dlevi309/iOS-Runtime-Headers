/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKInputEvent.h>

@interface TISKDeleteKeyEvent : TISKInputEvent {

	long long _deletePostion;

}

@property (assign,nonatomic) long long deletePostion;              //@synthesize deletePostion=_deletePostion - In the implementation block
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(long long)_metricDeleteKeyPostion;
-(long long)deletePostion;
-(void)setDeletePostion:(long long)arg1 ;
@end

