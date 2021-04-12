/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultHandler;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(long long)requestId;
-(void)setState:(EKDayOccurrenceState *)arg1 ;
-(id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(EKDayOccurrenceState *)state;
@end

