/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSAccountChannelsInterface.h>

@class VSAccountStore;

@interface VUIJSAccountChannels : IKJSObject <VUIJSAccountChannelsInterface> {

	VSAccountStore* _accountStore;

}

@property (nonatomic,retain) VSAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(void)dealloc;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(id)initWithAppContext:(id)arg1 ;
-(void)fetchMSOProviderStatus:(id)arg1 ;
-(void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
@end

