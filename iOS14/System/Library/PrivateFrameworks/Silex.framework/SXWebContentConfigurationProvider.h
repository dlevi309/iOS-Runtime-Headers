/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXWebContentConfigurationProvider.h>

@protocol SXWebContentConfigurationProvider <NSObject>
@required
-(void)onChange:(/*^block*/id)arg1;
-(id)configurationForSize:(CGSize)arg1 dataSources:(id)arg2 sourceURL:(id)arg3;

@end


@protocol SXPresentationAttributesProvider, SXStoreFrontProvider, SWLocation;
@class NSLocale, NSString;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider> {

	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXStoreFrontProvider> _storeFrontProvider;
	NSLocale* _locale;
	id<SWLocation> _location;
	/*^block*/id _changeBlock;

}

@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXStoreFrontProvider> storeFrontProvider;                                      //@synthesize storeFrontProvider=_storeFrontProvider - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) id<SWLocation> location;                                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) id changeBlock;                                                                       //@synthesize changeBlock=_changeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSLocale *)locale;
-(id)changeBlock;
-(void)setChangeBlock:(id)arg1 ;
-(id<SWLocation>)location;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id)configurationForSize:(CGSize)arg1 dataSources:(id)arg2 sourceURL:(id)arg3 ;
-(id<SXStoreFrontProvider>)storeFrontProvider;
-(void)invokeChangeListener;
-(id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 location:(id)arg4 ;
@end

