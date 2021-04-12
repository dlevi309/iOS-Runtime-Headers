/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_siriIsEnabled;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(long long)presentationIdentifier;
-(id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2 ;
-(id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3 ;
@end

