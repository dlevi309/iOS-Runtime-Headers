/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {

	TKSmartCard* _smartCard;
	BOOL _hasSession;
	TKSmartCard* _errorCard;

}

@property (readonly) TKSmartCard * smartCard; 
-(id)name;
-(id)initWithToken:(id)arg1 ;
-(void)endRequest;
-(TKSmartCard *)smartCard;
-(void)beginRequest;
@end

