/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(ISDataProvider *)dataProvider;
-(SSAuthenticationContext *)authenticationContext;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
@end

