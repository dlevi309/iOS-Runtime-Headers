/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)send;
-(IKAppContext *)appContext;
-(IKServiceContext *)serviceContext;
-(void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 serviceContext:(id)arg2 ;
@end

