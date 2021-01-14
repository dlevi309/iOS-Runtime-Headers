/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSUUID, NWBrowser;

@interface NWRemoteBrowserWrapper : NSObject {

	NSUUID* _clientID;
	NWBrowser* _browser;

}

@property (retain) NSUUID * clientID;                //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWBrowser * browser;              //@synthesize browser=_browser - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(NWBrowser *)browser;
-(void)setBrowser:(NWBrowser *)arg1 ;
@end

