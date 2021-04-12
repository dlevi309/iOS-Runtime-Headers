/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


@class DDRemoteActionContext;

@interface DDRemoteActionViewControllerProvider : NSObject {

	DDRemoteActionContext* _actionContext;

}

@property (readonly) DDRemoteActionContext * actionContext;              //@synthesize actionContext=_actionContext - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(DDRemoteActionContext *)actionContext;
-(void)createViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
@end
