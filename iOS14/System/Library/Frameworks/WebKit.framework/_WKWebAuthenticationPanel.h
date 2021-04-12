/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSSet;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {

	ObjectStorage<API::WebAuthenticationPanel> _panel;
	WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter>* _client;
	RetainPtr<NSMutableSet>* _transports;

}

@property (assign,nonatomic,__weak) id<_WKWebAuthenticationPanelDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * relyingPartyID; 
@property (nonatomic,copy,readonly) NSSet * transports; 
@property (nonatomic,readonly) long long type; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearAllLocalAuthenticatorCredentials;
-(id<_WKWebAuthenticationPanelDelegate>)delegate;
-(void)setDelegate:(id<_WKWebAuthenticationPanelDelegate>)arg1 ;
-(long long)type;
-(Object*)_apiObject;
-(NSString *)relyingPartyID;
-(NSSet *)transports;
-(void)cancel;
-(void)dealloc;
@end

