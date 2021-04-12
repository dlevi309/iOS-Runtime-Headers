/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SSAuthenticationContext, ISDataProvider;

@interface SUXMLHTTPStoreRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	ISDataProvider* _dataProvider;

}

@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISDataProvider * dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (copy) id outputBlock; 
-(void)run;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(ISDataProvider *)dataProvider;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
@end

