/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNeedsUserInteractivePriority:(BOOL)arg1 ;
-(id)transitionHandler;
-(BSServiceConnectionEndpoint *)endpoint;
-(BOOL)needsUserInteractivePriority;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)setTransitionHandler:(id)arg1 ;
@end

