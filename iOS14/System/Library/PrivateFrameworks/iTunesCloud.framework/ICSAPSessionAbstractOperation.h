/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
-(void)execute;
-(ICSAPSession *)sapSession;
-(void)finishWithError:(id)arg1 ;
-(void)setSapSession:(ICSAPSession *)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
@end

