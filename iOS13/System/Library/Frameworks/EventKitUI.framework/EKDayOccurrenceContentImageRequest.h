/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject {

	long long _requestId;
	unsigned long long _options;
	EKDayOccurrenceState* _state;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) long long requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) unsigned long long options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(unsigned long long)options;
-(EKDayOccurrenceState *)state;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setState:(EKDayOccurrenceState *)arg1 ;
-(long long)requestId;
-(id)resultHandler;
-(id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

