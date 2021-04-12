/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAdvertisingSettingsFactory.h>

@protocol SXAdvertisingSettingsFactory <NSObject>
@required
-(id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg1;

@end


@protocol SXDocumentProviding, SXAdControllerProvider;
@class NSString;

@interface SXAdvertisingSettingsFactory : NSObject <SXAdvertisingSettingsFactory> {

	id<SXDocumentProviding> _documentProvider;
	id<SXAdControllerProvider> _adControllerProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                     //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXAdControllerProvider> adControllerProvider;              //@synthesize adControllerProvider=_adControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id<SXAdControllerProvider>)adControllerProvider;
-(id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg1 adControllerProvider:(id)arg2 ;
@end

