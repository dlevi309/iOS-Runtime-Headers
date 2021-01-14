/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKServiceRequestDelegate;
#import <ITMLKit/ITMLKit-Structs.h>
@class IKAppContext, IKServiceContext;

@interface IKServiceRequest : NSObject {

	int _state;
	struct {
		BOOL hasDidCompleteWithStatus;
	}  _srDelegateFlags;
	IKAppContext* _appContext;
	IKServiceContext* _serviceContext;
	id<IKServiceRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                        //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) IKServiceContext * serviceContext;                       //@synthesize serviceContext=_serviceContext - In the implementation block
@property (assign,nonatomic,__weak) id<IKServiceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IKServiceRequestDelegate>)delegate;
-(void)setDelegate:(id<IKServiceRequestDelegate>)arg1 ;
-(IKServiceContext *)serviceContext;
-(IKAppContext *)appContext;
-(void)send;
-(void)cancel;
-(id)initWithAppContext:(id)arg1 serviceContext:(id)arg2 ;
-(void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
@end

