/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@protocol TKApplicationDelegate;
#import <JITAppKit/JITAppKit-Structs.h>
@class TKRepository, NSURL, NSString;

@interface TKApplication : NSObject {

	TKRepository* _repository;
	BOOL _ready;
	NSURL* _bundleURL;
	id<TKApplicationDelegate> _delegate;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) TKRepository * repository;                            //@synthesize repository=_repository - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                    //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) BOOL ready;                                           //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<TKApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)shared;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)ready;
-(NSURL *)bundleURL;
-(NSURL *)baseURL;
-(id<TKApplicationDelegate>)delegate;
-(NSString *)bundleVersion;
-(void)setDelegate:(id<TKApplicationDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TKRepository *)repository;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)absoluteURL:(id)arg1 ;
-(id)loadPageWithDataRequest:(id)arg1 ;
-(id)loadPage:(id)arg1 withData:(id)arg2 ;
-(id)loadPage:(id)arg1 withDataRequest:(id)arg2 ;
-(id)loadView:(id)arg1 ;
-(Class)loadClass:(id)arg1 ;
-(id)loadPage:(id)arg1 ;
-(id)newErrorViewController:(id)arg1 ;
-(id)viewPathForName:(id)arg1 ;
-(void)loadBundle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newLoadingViewController;
-(void)didLoadRepository:(id)arg1 ;
-(void)clearBundleCache;
@end

