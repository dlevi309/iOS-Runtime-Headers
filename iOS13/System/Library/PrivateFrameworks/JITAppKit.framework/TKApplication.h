/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _overrideCachesDirectoryPath;

}

@property (nonatomic,readonly) TKRepository * repository;                            //@synthesize repository=_repository - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                    //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,copy) NSString * overrideCachesDirectoryPath;                   //@synthesize overrideCachesDirectoryPath=_overrideCachesDirectoryPath - In the implementation block
@property (nonatomic,readonly) BOOL ready;                                           //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<TKApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)shared;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<TKApplicationDelegate>)delegate;
-(void)setDelegate:(id<TKApplicationDelegate>)arg1 ;
-(NSURL *)baseURL;
-(NSURL *)bundleURL;
-(NSString *)bundleVersion;
-(BOOL)ready;
-(void)setBaseURL:(NSURL *)arg1 ;
-(TKRepository *)repository;
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
-(NSString *)overrideCachesDirectoryPath;
-(void)didLoadRepository:(id)arg1 ;
-(void)clearBundleCache;
-(void)setOverrideCachesDirectoryPath:(NSString *)arg1 ;
@end

