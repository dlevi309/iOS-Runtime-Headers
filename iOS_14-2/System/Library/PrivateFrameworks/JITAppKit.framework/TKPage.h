/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@protocol TKNetworkTask;
@class TMLJSONObject, TMLContext, UIViewController, NSString, NSURLRequest, NSDictionary;

@interface TKPage : NSObject {

	TMLJSONObject* _dataObject;
	TMLContext* _context;
	UIViewController* _weakViewController;
	UIViewController* _loadingViewController;
	id<TKNetworkTask> _networkTask;
	BOOL _ready;
	BOOL _dataLoading;
	BOOL _shouldShowLoading;
	NSString* _viewName;
	NSURLRequest* _dataRequest;

}

@property (nonatomic,readonly) NSString * viewName;                            //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,copy) NSDictionary * data; 
@property (nonatomic,copy) NSURLRequest * dataRequest;                         //@synthesize dataRequest=_dataRequest - In the implementation block
@property (nonatomic,readonly) BOOL dataLoading;                               //@synthesize dataLoading=_dataLoading - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoading;                           //@synthesize shouldShowLoading=_shouldShowLoading - In the implementation block
-(void)load;
-(id)initWithViewName:(id)arg1 ;
-(NSString *)viewName;
-(void)dataError;
-(void)dispose;
-(void)setData:(NSDictionary *)arg1 ;
-(UIViewController *)viewController;
-(NSURLRequest *)dataRequest;
-(void)reload;
-(NSDictionary *)data;
-(void)loadRequest:(id)arg1 ;
-(void)dealloc;
-(id)createViewController;
-(void)reloadWithDelayedShowLoading:(BOOL)arg1 ;
-(void)setDataRequest:(NSURLRequest *)arg1 ;
-(void)showLoadingViewController;
-(void)didFinishLoading:(id)arg1 data:(id)arg2 responseError:(id)arg3 ;
-(void)dataLoaded:(id)arg1 withError:(id)arg2 ;
-(void)didLoadData:(BOOL)arg1 ;
-(void)hideLoadingViewController;
-(void)loadData:(id)arg1 postData:(id)arg2 ;
-(BOOL)dataLoading;
-(BOOL)shouldShowLoading;
-(void)setShouldShowLoading:(BOOL)arg1 ;
@end

