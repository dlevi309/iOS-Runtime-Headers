/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMCacheKeyFactory.h>

@protocol SXDOMCacheKeyFactory <NSObject>
@required
-(id)createCacheKeyForLayoutOptions:(id)arg1;

@end


@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;
@class NSString;

@interface SXDOMCacheKeyFactory : NSObject <SXDOMCacheKeyFactory> {

	id<SXDocumentProviding> _documentProvider;
	id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                             //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;              //@synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(id)createCacheKeyForLayoutOptions:(id)arg1 ;
@end

