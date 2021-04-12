/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol WDUserActivityResponder;
@class NSMutableDictionary, NSDictionary, NSMapTable;

@interface _HRWDActivityNode : NSObject {

	NSMutableDictionary* _responderActivity;
	NSDictionary* _nextResponderActivity;
	NSMapTable* _responderTable;
	id<WDUserActivityResponder> _responder;
	id<WDUserActivityResponder> _nextResponder;

}

@property (assign,nonatomic,__weak) id<WDUserActivityResponder> responder;                  //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<WDUserActivityResponder> nextResponder;              //@synthesize nextResponder=_nextResponder - In the implementation block
-(id)description;
-(id<WDUserActivityResponder>)nextResponder;
-(id<WDUserActivityResponder>)responder;
-(void)setResponder:(id<WDUserActivityResponder>)arg1 ;
-(id)initWithResponder:(id)arg1 ;
-(void)setNextResponder:(id<WDUserActivityResponder>)arg1 ;
-(id)_nextNode;
-(id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 ;
-(id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3 ;
-(void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2 ;
@end

