/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class SXAdRequest, NSString;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider> {

	SXAdRequest* _request;

}

@property (nonatomic,readonly) SXAdRequest * request;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXAdRequest *)request;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(id)initWithAdRequest:(id)arg1 ;
-(id)creativeTypeFromBannerType:(unsigned long long)arg1 ;
@end

