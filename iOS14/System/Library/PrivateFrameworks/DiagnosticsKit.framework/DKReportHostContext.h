/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKReportHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSString;

@interface DKReportHostContext : NSExtensionContext <DKReportHostRemoteContext, DKExtensionHostAdapter> {

	id<DKExtensionHostAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(void)completeRemoteWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

