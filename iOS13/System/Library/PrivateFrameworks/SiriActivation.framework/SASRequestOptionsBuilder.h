/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject {

	SASSystemState* _systemState;
	long long _presentationIdentifier;

}

@property (nonatomic,retain) SASSystemState * systemState;                  //@synthesize systemState=_systemState - In the implementation block
@property (assign,nonatomic) long long presentationIdentifier;              //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)_siriIsEnabled;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2 ;
-(long long)presentationIdentifier;
-(id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3 ;
@end

