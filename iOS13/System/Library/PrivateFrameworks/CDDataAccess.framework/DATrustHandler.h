/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol DATrustHandlerDelegate;
#import <CDDataAccess/CDDataAccess-Structs.h>
@class NSMutableDictionary;

@interface DATrustHandler : NSObject {

	id<DATrustHandlerDelegate> _delegate;
	NSMutableDictionary* _haveWarnedAboutCertDict;

}

@property (assign,nonatomic,__weak) id<DATrustHandlerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * haveWarnedAboutCertDict;              //@synthesize haveWarnedAboutCertDict=_haveWarnedAboutCertDict - In the implementation block
-(id<DATrustHandlerDelegate>)delegate;
-(void)setDelegate:(id<DATrustHandlerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)resetCertWarnings;
-(BOOL)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2 ;
-(id)_serverSuffixesToAlwaysFail;
-(void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2 ;
-(void)handleTrust:(SecTrustRef)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(int)_actionForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
-(NSMutableDictionary *)haveWarnedAboutCertDict;
-(void)setHaveWarnedAboutCertDict:(NSMutableDictionary *)arg1 ;
@end

