/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsHandlingNonAuthenticationDialogs;
	BOOL _shouldRecordLastAuthenticationDialogResponseTime;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

