/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol WDUserActivityResponder;
@class NSMutableDictionary, NSDictionary, NSMapTable;

@interface _WDActivityNode : NSObject {

	NSMutableDictionary* _responderActivity;
	NSDictionary* _nextResponderActivity;
	NSMapTable* _responderTable;
	id<WDUserActivityResponder> _responder;
	id<WDUserActivityResponder> _nextResponder;

}

@property (assign,nonatomic,__weak) id<WDUserActivityResponder> responder;                  //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<WDUserActivityResponder> nextResponder;              //@synthesize nextResponder=_nextResponder - In the implementation block
-(id<WDUserActivityResponder>)nextResponder;
-(void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2 ;
-(void)setNextResponder:(id<WDUserActivityResponder>)arg1 ;
-(void)setResponder:(id<WDUserActivityResponder>)arg1 ;
-(id<WDUserActivityResponder>)responder;
-(id)description;
-(id)_nextNode;
-(id)initWithResponder:(id)arg1 ;
-(id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 ;
-(id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3 ;
@end

