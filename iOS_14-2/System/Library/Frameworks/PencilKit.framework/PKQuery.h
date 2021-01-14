/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class PKRecognitionSessionManager;

@interface PKQuery : NSObject {

	PKRecognitionSessionManager* _sessionManager;
	id _delegate;

}

@property (assign,nonatomic,__weak) PKRecognitionSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                               //@synthesize delegate=_delegate - In the implementation block
-(PKRecognitionSessionManager *)sessionManager;
-(id)delegate;
-(void)start;
-(void)pause;
-(void)setDelegate:(id)arg1 ;
-(void)teardown;
-(id)initWithRecognitionSessionManager:(id)arg1 ;
-(void)setSessionManager:(PKRecognitionSessionManager *)arg1 ;
@end

