/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;
#import <SafariFoundation/SafariFoundation-Structs.h>
@class IMOneTimeCodeAccelerator, NSObject, SFAutoFillOneTimeCode, NSHashTable;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {

	IMOneTimeCodeAccelerator* _oneTimeCodeAccelerator;
	NSObject*<OS_dispatch_queue> _internalQueue;
	SFAutoFillOneTimeCode* _currentOneTimeCode;
	NSHashTable* _observers;
	id<SFAppAutoFillOneTimeCodeProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasOneTimeCode; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id<SFAppAutoFillOneTimeCodeProviderDelegate>)delegate;
-(id)currentOneTimeCodeForWebBrowserWithWebsiteFrameURLs:(id)arg1 ;
-(void)consumeCurrentOneTimeCode;
-(void)setDelegate:(id<SFAppAutoFillOneTimeCodeProviderDelegate>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)hasOneTimeCode;
-(void)_processOneTimeCode:(id)arg1 ;
-(void)_validateCurrentOneTimeCode;
-(id)_secureURLWithDomain:(id)arg1 ;
-(BOOL)_validateURL:(id)arg1 withURLFromOriginBoundCode:(id)arg2 ;
-(id)currentOneTimeCodeWithAuditToken:(SCD_Struct_SF2)arg1 website:(id)arg2 ;
@end

