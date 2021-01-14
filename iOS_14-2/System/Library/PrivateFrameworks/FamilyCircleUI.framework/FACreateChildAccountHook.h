/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FACreateChildControllerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class RUIObjectModel, AAUIServerHookResponse, NSString;

@interface FACreateChildAccountHook : NSObject <FACreateChildControllerDelegate, AAUIServerHook> {

	id<AAUIServerHookDelegate> _delegate;
	RUIObjectModel* _objectModel;

}

@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel;                             //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RUIObjectModel *)objectModel;
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)createChildControllerDidPresentInitialViewController:(id)arg1 ;
-(void)_handleCreateChildAccountWithCompletion:(/*^block*/id)arg1 ;
@end

