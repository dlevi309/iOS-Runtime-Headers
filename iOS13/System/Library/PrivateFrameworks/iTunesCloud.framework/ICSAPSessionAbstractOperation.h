/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)setSapSession:(ICSAPSession *)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(ICSAPSession *)sapSession;
@end

