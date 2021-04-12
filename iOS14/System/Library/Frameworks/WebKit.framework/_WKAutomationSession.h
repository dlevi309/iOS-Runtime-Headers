/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, _WKAutomationSessionConfiguration;

@interface _WKAutomationSession : NSObject <WKObject> {

	ObjectStorage<WebKit::WebAutomationSession> _session;
	RetainPtr<_WKAutomationSessionConfiguration>* _configuration;
	WeakObjCPtr<id<_WKAutomationSessionDelegate> > _delegate;

}

@property (nonatomic,copy) NSString * sessionIdentifier; 
@property (nonatomic,copy,readonly) _WKAutomationSessionConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<_WKAutomationSessionDelegate> delegate; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isSimulatingUserInteraction,nonatomic,readonly) BOOL simulatingUserInteraction; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(id)init;
-(id<_WKAutomationSessionDelegate>)delegate;
-(void)terminate;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<_WKAutomationSessionDelegate>)arg1 ;
-(_WKAutomationSessionConfiguration *)configuration;
-(BOOL)isSimulatingUserInteraction;
-(Object*)_apiObject;
-(void)dealloc;
@end

