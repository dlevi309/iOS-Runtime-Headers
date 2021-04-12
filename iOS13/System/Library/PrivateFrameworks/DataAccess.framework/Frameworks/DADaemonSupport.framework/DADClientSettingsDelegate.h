/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DASettingsResponseDelegate.h>

@class DAOofParams;

@interface DADClientSettingsDelegate : DADClientDelegate <DASettingsResponseDelegate> {

	BOOL _isUpdate;
	DAOofParams* _requestParams;
	DAOofParams* _responseParams;

}

@property (assign,nonatomic) BOOL isUpdate;                             //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,retain) DAOofParams * requestParams;               //@synthesize requestParams=_requestParams - In the implementation block
@property (nonatomic,retain) DAOofParams * responseParams;              //@synthesize responseParams=_responseParams - In the implementation block
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)disable;
-(BOOL)isUpdate;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)settingsRequestFinishedWithResults:(id)arg1 status:(long long)arg2 error:(id)arg3 ;
-(BOOL)isOofSupported;
-(void)setRequestParams:(DAOofParams *)arg1 ;
-(DAOofParams *)requestParams;
-(void)setResponseParams:(DAOofParams *)arg1 ;
-(DAOofParams *)responseParams;
-(id)initWithAccountID:(id)arg1 requestDictionary:(id)arg2 forUpdate:(BOOL)arg3 client:(id)arg4 ;
-(void)beginSettingsRequest;
@end

