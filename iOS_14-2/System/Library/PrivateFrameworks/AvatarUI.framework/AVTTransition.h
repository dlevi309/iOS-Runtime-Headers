/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTransition.h>

@protocol AVTTransition <NSObject>
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) BOOL animated; 
@property (nonatomic,readonly) id<AVTTransitionModel> model; 
@property (nonatomic,copy) id setupHandler; 
@property (nonatomic,copy) id completionHandler; 
@required
-(BOOL)animated;
-(id<AVTTransitionModel>)model;
-(void)setAnimated:(BOOL)arg1;
-(void)setCompletionHandler:(/*^block*/id)arg1;
-(void)start;
-(id)completionHandler;
-(id)setupHandler;
-(void)setSetupHandler:(/*^block*/id)arg1;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)cancel;

@end


@protocol AVTTransitionModel, AVTUILogger;
@class NSString;

@interface AVTTransition : NSObject <AVTTransition> {

	BOOL _animated;
	long long _state;
	id<AVTTransitionModel> _model;
	/*^block*/id _setupHandler;
	/*^block*/id _completionHandler;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                    //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL animated;                               //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) id<AVTTransitionModel> model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) id setupHandler;                               //@synthesize setupHandler=_setupHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)animated;
-(id<AVTTransitionModel>)model;
-(void)performTransition;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(id)completionHandler;
-(NSString *)description;
-(id<AVTUILogger>)logger;
-(id)setupHandler;
-(void)performCancellation;
-(void)setSetupHandler:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(void)cancel;
@end

