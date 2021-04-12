/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {

	SSURLRequestProperties* _requestProperties;
	SUMescalSession* _session;

}

@property (readonly) SUMescalSession * mescalSession; 
-(void)run;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(void)dealloc;
-(SUMescalSession *)mescalSession;
-(BOOL)_isMescalEnabled;
-(id)_setupSAPCertificate:(id*)arg1 ;
-(id)_setupSAPWithData:(id)arg1 error:(id*)arg2 ;
@end

