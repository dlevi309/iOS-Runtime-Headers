/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(id<_WKAutomationSessionDelegate>)delegate;
-(void)setDelegate:(id<_WKAutomationSessionDelegate>)arg1 ;
-(void)terminate;
-(id)initWithConfiguration:(id)arg1 ;
-(_WKAutomationSessionConfiguration *)configuration;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(Object*)_apiObject;
-(BOOL)isPaired;
-(BOOL)isSimulatingUserInteraction;
@end

