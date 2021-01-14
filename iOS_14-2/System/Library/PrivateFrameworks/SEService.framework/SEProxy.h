/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)seid;
-(NFSecureElementManagerSession *)session;
-(void)setSeid:(NSString *)arg1 ;
-(void)setSession:(NFSecureElementManagerSession *)arg1 ;
-(oneway void)transceive:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 seid:(id)arg2 ;
@end

