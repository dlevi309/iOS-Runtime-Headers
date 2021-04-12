/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <libobjc.A.dylib/FPUIActionRemoteContextDelegate.h>
#import <libobjc.A.dylib/FPUIActionControllerProtocol.h>

@protocol FPUIActionControllerDelegate;
@class NSString, NSArray;

@interface FPUIActionController : NSObject <FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol> {

	NSString* _domainIdentifier;
	NSString* _actionIdentifier;
	NSArray* _items;
	NSString* _providerIdentifier;
	id<FPUIActionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FPUIActionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * providerIdentifier;                               //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                                 //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
+(id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5 ;
-(NSString *)providerIdentifier;
-(NSString *)domainIdentifier;
-(id<FPUIActionControllerDelegate>)delegate;
-(NSArray *)items;
-(void)setDelegate:(id<FPUIActionControllerDelegate>)arg1 ;
-(id)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)actionIdentifier;
-(id)_getExtensionWithError:(id*)arg1 ;
-(void)_delegateError:(id)arg1 ;
-(void)_delegateDidFinishWithUserInfo:(id)arg1 error:(id)arg2 ;
-(void)remoteActionContextDidFinishAction:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)remoteActionContext:(id)arg1 didEncounterError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

