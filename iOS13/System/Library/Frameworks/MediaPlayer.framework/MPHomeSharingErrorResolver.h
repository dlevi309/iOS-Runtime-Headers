/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <libobjc.A.dylib/SSAuthorizationRequestDelegate.h>

@class NSURL, NSData, NSError, NSMutableArray, SSAuthorizationRequest, MPHomeSharingML3DataProvider, NSString;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {

	NSURL* _keybagURL;
	unsigned long long _accountID;
	NSData* _accountTokenData;
	unsigned long long _downloaderAccountID;
	NSData* _downloaderAccountTokenData;
	unsigned long long _familyAccountID;
	NSError* _error;
	NSMutableArray* _requests;
	SSAuthorizationRequest* _activeRequest;
	BOOL _atLeastOneAuthorizationRequestSuccessful;
	MPHomeSharingML3DataProvider* _dataProvider;

}

@property (nonatomic,retain) MPHomeSharingML3DataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDataProvider:(MPHomeSharingML3DataProvider *)arg1 ;
-(MPHomeSharingML3DataProvider *)dataProvider;
-(void)resolveError:(id)arg1 ;
-(void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 ;
-(id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 downloaderAccountID:(unsigned long long)arg4 downloaderAccountTokenData:(id)arg5 familyAccountID:(unsigned long long)arg6 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(void)_performMachineAuthorization;
-(void)_processNextAuthorizationRequest;
@end

