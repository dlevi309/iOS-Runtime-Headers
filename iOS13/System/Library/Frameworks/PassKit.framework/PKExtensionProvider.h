/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSDictionary, NSObject, NSArray;

@interface PKExtensionProvider : NSObject {

	BOOL _didReceiveExtensions;
	id _matchingContext;
	NSDictionary* _extensions;
	NSDictionary* _passKitExtensions;
	NSObject*<OS_dispatch_queue> _extensionQueue;
	NSObject*<OS_dispatch_semaphore> _extensionSema;

}

@property (nonatomic,retain) id matchingContext;                                          //@synthesize matchingContext=_matchingContext - In the implementation block
@property (nonatomic,retain) NSDictionary * extensions;                                   //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,retain) NSDictionary * passKitExtensions;                            //@synthesize passKitExtensions=_passKitExtensions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionQueue;                 //@synthesize extensionQueue=_extensionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> extensionSema;              //@synthesize extensionSema=_extensionSema - In the implementation block
@property (assign,nonatomic) BOOL didReceiveExtensions;                                   //@synthesize didReceiveExtensions=_didReceiveExtensions - In the implementation block
@property (nonatomic,readonly) NSArray * allExtensions; 
+(id)sharedProvider;
-(id)init;
-(void)dealloc;
-(NSDictionary *)extensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
-(NSArray *)allExtensions;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(void)setMatchingContext:(id)arg1 ;
-(id)matchingContext;
-(void)beginMatchingExtensions;
-(void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endMatchingExtensions;
-(id)extensionWithIdentifier:(id)arg1 ;
-(void)_receivedExtensions:(id)arg1 ;
-(void)extensionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)passKitExtensions;
-(void)setPassKitExtensions:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionQueue;
-(void)setExtensionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)extensionSema;
-(void)setExtensionSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)didReceiveExtensions;
-(void)setDidReceiveExtensions:(BOOL)arg1 ;
@end

