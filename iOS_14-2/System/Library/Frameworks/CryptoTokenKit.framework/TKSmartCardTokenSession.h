/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TKSmartCard *)smartCard;
-(id)name;
-(id)initWithToken:(id)arg1 ;
-(void)endRequest;
-(void)beginRequest;
@end

