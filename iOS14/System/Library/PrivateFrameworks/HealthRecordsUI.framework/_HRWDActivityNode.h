/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol HRWDUserActivityResponder;
@class NSMutableDictionary, NSDictionary, NSMapTable;

@interface _HRWDActivityNode : NSObject {

	NSMutableDictionary* _responderActivity;
	NSDictionary* _nextResponderActivity;
	NSMapTable* _responderTable;
	id<HRWDUserActivityResponder> _responder;
	id<HRWDUserActivityResponder> _nextResponder;

}

@property (assign,nonatomic,__weak) id<HRWDUserActivityResponder> responder;                  //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<HRWDUserActivityResponder> nextResponder;              //@synthesize nextResponder=_nextResponder - In the implementation block
-(id<HRWDUserActivityResponder>)nextResponder;
-(void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2 ;
-(void)setNextResponder:(id<HRWDUserActivityResponder>)arg1 ;
-(void)setResponder:(id<HRWDUserActivityResponder>)arg1 ;
-(id<HRWDUserActivityResponder>)responder;
-(id)description;
-(id)_nextNode;
-(id)initWithResponder:(id)arg1 ;
-(id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 ;
-(id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3 ;
@end

