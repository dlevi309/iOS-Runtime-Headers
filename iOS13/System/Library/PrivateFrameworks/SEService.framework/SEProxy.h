/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <SEService/SEProxyInterface.h>

@class NFSecureElementManagerSession, NSString;

@interface SEProxy : NSObject <SEProxyInterface> {

	NFSecureElementManagerSession* _session;
	NSString* _seid;

}

@property (nonatomic,retain) NFSecureElementManagerSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * seid;                                      //@synthesize seid=_seid - In the implementation block
-(NFSecureElementManagerSession *)session;
-(void)setSession:(NFSecureElementManagerSession *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(NSString *)seid;
-(oneway void)transceive:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 seid:(id)arg2 ;
-(oneway void)applets:(/*^block*/id)arg1 ;
@end

