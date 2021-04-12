/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class AAUIServerHookResponse, AKAppleIDServerUIDataHarvester, NSString;

@interface AAUIAuthKitRecoveryHook : NSObject <AAUIServerHook> {

	id<AAUIServerHookDelegate> _delegate;
	AAUIServerHookResponse* _serverHookResponse;
	AKAppleIDServerUIDataHarvester* _serverDataHarvester;

}

@property (nonatomic,retain) AKAppleIDServerUIDataHarvester * serverDataHarvester;              //@synthesize serverDataHarvester=_serverDataHarvester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse;                       //@synthesize serverHookResponse=_serverHookResponse - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(AKAppleIDServerUIDataHarvester *)serverDataHarvester;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)harvestDataFromResponse:(id)arg1 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(AAUIServerHookResponse *)arg1 ;
-(void)setServerDataHarvester:(AKAppleIDServerUIDataHarvester *)arg1 ;
-(id)_cdpStateUIProvider;
@end

