/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSArray;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {

	ObjectStorage<API::WebAuthenticationPanel> _panel;
	WeakPtr<WebKit::WebAuthenticationPanelClient>* _client;
	RetainPtr<NSMutableArray>* _transports;

}

@property (assign,nonatomic,__weak) id<_WKWebAuthenticationPanelDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * relyingPartyID; 
@property (nonatomic,copy,readonly) NSArray * transports; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(long long)type;
-(id<_WKWebAuthenticationPanelDelegate>)delegate;
-(void)setDelegate:(id<_WKWebAuthenticationPanelDelegate>)arg1 ;
-(void)cancel;
-(NSArray *)transports;
-(Object*)_apiObject;
-(NSString *)relyingPartyID;
@end

