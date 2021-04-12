/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id<IMSendProgressDelegate>)delegate;
-(void)setDelegate:(id<IMSendProgressDelegate>)arg1 ;
-(id)context;
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

