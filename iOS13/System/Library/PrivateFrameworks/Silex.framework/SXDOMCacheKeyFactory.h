/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)createCacheKeyForLayoutOptions:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
@end

