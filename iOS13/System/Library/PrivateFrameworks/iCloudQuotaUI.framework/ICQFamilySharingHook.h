/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate, ICQServerHookDelegate;
@class FACircleStateController, NSString, AAUIServerHookResponse;

@interface ICQFamilySharingHook : NSObject <AAUIServerHook> {

	id<AAUIServerHookDelegate> _delegate;
	id<ICQServerHookDelegate> _flowDelegate;
	FACircleStateController* _familyCircleStateController;

}

@property (__weak) id<ICQServerHookDelegate> flowDelegate;                             //@synthesize flowDelegate=_flowDelegate - In the implementation block
@property (retain) FACircleStateController * familyCircleStateController;              //@synthesize familyCircleStateController=_familyCircleStateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFlowDelegate:(id)arg1 ;
-(void)_beginFamilySharingFlowWithCompletion:(/*^block*/id)arg1 ;
-(id<ICQServerHookDelegate>)flowDelegate;
-(void)setFlowDelegate:(id<ICQServerHookDelegate>)arg1 ;
-(FACircleStateController *)familyCircleStateController;
-(void)setFamilyCircleStateController:(FACircleStateController *)arg1 ;
@end

