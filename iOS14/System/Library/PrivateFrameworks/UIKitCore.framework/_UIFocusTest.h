/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)currentTest;
+(void)_setCurrentTest:(id)arg1 ;
-(void)_finish:(BOOL)arg1 ;
-(id<_UIFocusTestDelegate>)delegate;
-(void)_start;
-(void)stop;
-(void)setDelegate:(id<_UIFocusTestDelegate>)arg1 ;
-(void)main;
-(void)setRunCompletionHandler:(id)arg1 ;
-(BOOL)_isApplicationTest;
-(id)runCompletionHandler;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsApplicationTest:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)state;
-(NSString *)identifier;
-(void)cancel;
-(id)initWithIdentifier:(id)arg1 ;
@end

