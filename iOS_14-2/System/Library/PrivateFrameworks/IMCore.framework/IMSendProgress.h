/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol IMSendProgressDelegate, IMSendProgressTimeDataSource;
@class NSTimer, NSDictionary;

@interface IMSendProgress : NSObject {

	id<IMSendProgressDelegate> _delegate;
	id _context;
	NSTimer* _sendProgressTimer;
	NSDictionary* _sendingItems;
	float _cachedSendProgress;
	BOOL _wasShowing;
	BOOL _startSendProgressImmediately;
	id<IMSendProgressTimeDataSource> _timeDataSource;

}

@property (nonatomic,copy) NSDictionary * sendingItems;                                    //@synthesize sendingItems=_sendingItems - In the implementation block
@property (nonatomic,retain) id<IMSendProgressTimeDataSource> timeDataSource;              //@synthesize timeDataSource=_timeDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IMSendProgressDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL startSendProgressImmediately;                            //@synthesize startSendProgressImmediately=_startSendProgressImmediately - In the implementation block
+(Class)_timeDataSourceClass;
-(id<IMSendProgressDelegate>)delegate;
-(id)context;
-(void)setDelegate:(id<IMSendProgressDelegate>)arg1 ;
-(id)description;
-(void)invalidate;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(void)updateForItems:(id)arg1 forced:(BOOL)arg2 ;
-(void)setStartSendProgressImmediately:(BOOL)arg1 ;
-(BOOL)startSendProgressImmediately;
-(id)initWithDelegate:(id)arg1 context:(id)arg2 ;
-(BOOL)_hasSendingMessages;
-(void)setSendingItems:(NSDictionary *)arg1 ;
-(void)_scheduleSendProgressTimerIfNeeded;
-(void)_updateSendProgress;
-(id<IMSendProgressTimeDataSource>)timeDataSource;
-(void)_resetSendProgress;
-(void)_sendProgressTimerFired:(id)arg1 ;
-(NSDictionary *)sendingItems;
-(void)setTimeDataSource:(id<IMSendProgressTimeDataSource>)arg1 ;
@end

