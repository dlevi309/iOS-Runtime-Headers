/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {

	PKPrinter* _printer;
	int _requestState;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) int requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestInfoForPrinter:(id)arg1 ;
-(void)setRequestState:(int)arg1 ;
-(int)requestState;
-(void)setCompletionHandler:(id)arg1 ;
-(void)requestPrintInfo;
-(id)completionHandler;
@end

