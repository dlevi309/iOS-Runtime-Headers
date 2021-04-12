/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement {

	long long _facebookType;
	NSString* _urlString;

}

@property (nonatomic,readonly) long long facebookType;              //@synthesize facebookType=_facebookType - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                //@synthesize urlString=_urlString - In the implementation block
-(NSString *)URLString;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(long long)facebookType;
@end

