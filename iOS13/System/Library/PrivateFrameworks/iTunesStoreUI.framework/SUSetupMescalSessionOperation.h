/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {

	SSURLRequestProperties* _requestProperties;
	SUMescalSession* _session;

}

@property (readonly) SUMescalSession * mescalSession; 
-(void)dealloc;
-(void)run;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(SUMescalSession *)mescalSession;
-(BOOL)_isMescalEnabled;
-(id)_setupSAPCertificate:(id*)arg1 ;
-(id)_setupSAPWithData:(id)arg1 error:(id*)arg2 ;
@end

