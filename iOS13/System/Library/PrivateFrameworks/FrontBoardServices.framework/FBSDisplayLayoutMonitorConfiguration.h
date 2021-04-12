/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject {

	BSServiceConnectionEndpoint* _endpoint;
	BOOL _needsUserInteractivePriority;
	/*^block*/id _transitionHandler;

}

@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL needsUserInteractivePriority;                          //@synthesize needsUserInteractivePriority=_needsUserInteractivePriority - In the implementation block
@property (nonatomic,copy) id transitionHandler;                                         //@synthesize transitionHandler=_transitionHandler - In the implementation block
+(id)configurationWithEndpoint:(id)arg1 ;
+(id)configurationForDefaultMainDisplayMonitor;
-(id)init;
-(BSServiceConnectionEndpoint *)endpoint;
-(BOOL)needsUserInteractivePriority;
-(id)transitionHandler;
-(void)setTransitionHandler:(id)arg1 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)setNeedsUserInteractivePriority:(BOOL)arg1 ;
@end

