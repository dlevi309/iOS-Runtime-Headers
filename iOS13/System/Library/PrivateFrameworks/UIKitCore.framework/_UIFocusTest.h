/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFocusTestDelegate;
@class NSString;

@interface _UIFocusTest : NSObject {

	BOOL _isApplicationTest;
	NSString* _identifier;
	long long _state;
	id<_UIFocusTestDelegate> _delegate;
	/*^block*/id _runCompletionHandler;

}

@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id runCompletionHandler;                                         //@synthesize runCompletionHandler=_runCompletionHandler - In the implementation block
@property (assign,getter=_isApplicationTest,nonatomic) BOOL isApplicationTest;              //@synthesize isApplicationTest=_isApplicationTest - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusTestDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
+(void)_setCurrentTest:(id)arg1 ;
+(id)currentTest;
-(id<_UIFocusTestDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusTestDelegate>)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(void)stop;
-(void)main;
-(id)initWithIdentifier:(id)arg1 ;
-(long long)state;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(void)_start;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRunCompletionHandler:(id)arg1 ;
-(BOOL)_isApplicationTest;
-(void)_finish:(BOOL)arg1 ;
-(id)runCompletionHandler;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsApplicationTest:(BOOL)arg1 ;
@end

