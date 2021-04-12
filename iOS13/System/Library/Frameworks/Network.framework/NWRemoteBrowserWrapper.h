/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSUUID, NWBrowser;

@interface NWRemoteBrowserWrapper : NSObject {

	NSUUID* _clientID;
	NWBrowser* _browser;

}

@property (retain) NSUUID * clientID;                //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWBrowser * browser;              //@synthesize browser=_browser - In the implementation block
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
-(NWBrowser *)browser;
-(void)setBrowser:(NWBrowser *)arg1 ;
@end

