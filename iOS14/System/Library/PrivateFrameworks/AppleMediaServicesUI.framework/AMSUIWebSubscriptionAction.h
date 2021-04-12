/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString;

@interface AMSUIWebSubscriptionAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _extendedCarrierCheck;
	long long _cachePolicy;
	long long _mediaType;

}

@property (assign,nonatomic) long long cachePolicy;                  //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) BOOL extendedCarrierCheck;              //@synthesize extendedCarrierCheck=_extendedCarrierCheck - In the implementation block
@property (assign,nonatomic) long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(long long)cachePolicy;
-(void)setCachePolicy:(long long)arg1 ;
-(BOOL)extendedCarrierCheck;
-(void)setExtendedCarrierCheck:(BOOL)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

