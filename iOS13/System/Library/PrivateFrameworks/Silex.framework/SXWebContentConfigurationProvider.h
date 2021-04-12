/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXWebContentConfigurationProvider.h>

@protocol SXWebContentConfigurationProvider <NSObject>
@required
-(void)onChange:(/*^block*/id)arg1;
-(id)configurationForSize:(CGSize)arg1 dataSources:(id)arg2;

@end


@protocol SXPresentationAttributesProvider, SXStoreFrontProvider, SXWebContentLocationProvider;
@class NSLocale, NSString;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider> {

	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXStoreFrontProvider> _storeFrontProvider;
	NSLocale* _locale;
	id<SXWebContentLocationProvider> _locationProvider;
	/*^block*/id _changeBlock;

}

@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXStoreFrontProvider> storeFrontProvider;                                      //@synthesize storeFrontProvider=_storeFrontProvider - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) id<SXWebContentLocationProvider> locationProvider;                                //@synthesize locationProvider=_locationProvider - In the implementation block
@property (nonatomic,copy) id changeBlock;                                                                       //@synthesize changeBlock=_changeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSLocale *)locale;
-(id<SXWebContentLocationProvider>)locationProvider;
-(id)changeBlock;
-(void)setChangeBlock:(id)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(id)configurationForSize:(CGSize)arg1 dataSources:(id)arg2 ;
-(id<SXStoreFrontProvider>)storeFrontProvider;
-(void)invokeChangeListener;
-(id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 locationProvider:(id)arg4 ;
@end

