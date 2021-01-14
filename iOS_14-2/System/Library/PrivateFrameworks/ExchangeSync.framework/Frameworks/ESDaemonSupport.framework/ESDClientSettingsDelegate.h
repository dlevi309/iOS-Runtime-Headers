/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <ESDaemonSupport/ESDClientDelegate.h>
#import <ESDaemonSupport/ESSettingsResponseDelegate.h>

@class DAOofParams;

@interface ESDClientSettingsDelegate : ESDClientDelegate <ESSettingsResponseDelegate> {

	BOOL _isUpdate;
	DAOofParams* _requestParams;
	DAOofParams* _responseParams;

}

@property (assign,nonatomic) BOOL isUpdate;                             //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,retain) DAOofParams * requestParams;               //@synthesize requestParams=_requestParams - In the implementation block
@property (nonatomic,retain) DAOofParams * responseParams;              //@synthesize responseParams=_responseParams - In the implementation block
-(void)disable;
-(BOOL)isUpdate;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)settingsRequestFinishedWithResults:(id)arg1 status:(long long)arg2 error:(id)arg3 ;
-(BOOL)isOofSupported;
-(void)dealloc;
-(DAOofParams *)requestParams;
-(void)setRequestParams:(DAOofParams *)arg1 ;
-(void)setResponseParams:(DAOofParams *)arg1 ;
-(DAOofParams *)responseParams;
-(id)initWithAccountID:(id)arg1 requestDictionary:(id)arg2 forUpdate:(BOOL)arg3 client:(id)arg4 ;
-(void)beginSettingsRequest;
@end

