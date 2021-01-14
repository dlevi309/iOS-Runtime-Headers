/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSDictionary, NSMutableArray, NSObject;

@interface PKExtensionProvider : NSObject {

	BOOL _isBeginningMatching;
	NSString* _extensionPoint;
	NSDictionary* _passKitExtensions;
	id _matchingContext;
	NSMutableArray* _beginMatchingCompletions;
	NSObject*<OS_dispatch_source> _extensionMatchTimer;
	NSObject*<OS_dispatch_queue> _extensionQueue;

}

@property (nonatomic,copy) NSString * extensionPoint;                                        //@synthesize extensionPoint=_extensionPoint - In the implementation block
@property (nonatomic,retain) NSDictionary * passKitExtensions;                               //@synthesize passKitExtensions=_passKitExtensions - In the implementation block
@property (nonatomic,retain) id matchingContext;                                             //@synthesize matchingContext=_matchingContext - In the implementation block
@property (assign,nonatomic) BOOL isBeginningMatching;                                       //@synthesize isBeginningMatching=_isBeginningMatching - In the implementation block
@property (nonatomic,retain) NSMutableArray * beginMatchingCompletions;                      //@synthesize beginMatchingCompletions=_beginMatchingCompletions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> extensionMatchTimer;              //@synthesize extensionMatchTimer=_extensionMatchTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionQueue;                    //@synthesize extensionQueue=_extensionQueue - In the implementation block
+(id)providerForExtensionPoint:(id)arg1 ;
-(id)init;
-(id)initWithExtensionPoint:(id)arg1 ;
-(void)_endMatchingExtensions;
-(void)_beginMatchingExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)extensionsWithContainingApplicationIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtensionPoint:(NSString *)arg1 ;
-(id)_extensionsForContainingApplicationIdentifiers:(id)arg1 ;
-(void)_invokeAndClearBeginMatchingCompletionsWithError:(id)arg1 ;
-(BOOL)isBeginningMatching;
-(id)_extensionMatchingEntitlementAttribute;
-(void)_finishedMatchingExtensions:(id)arg1 withError:(id)arg2 ;
-(void)setPassKitExtensions:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionQueue;
-(void)extensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionsWithContainingAppBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)passKitExtensions;
-(void)beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsBeginningMatching:(BOOL)arg1 ;
-(NSMutableArray *)beginMatchingCompletions;
-(void)setBeginMatchingCompletions:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)extensionMatchTimer;
-(void)setExtensionMatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setExtensionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(NSString *)extensionPoint;
-(void)dealloc;
@end

