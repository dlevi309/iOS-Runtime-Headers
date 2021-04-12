/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMObjectProviderFactory.h>

@protocol SXDOMObjectProviderFactory <NSObject>
@required
-(id)createDOMObjectProvider;

@end


@protocol SXDocumentControllerProvider;
@class SXJSONObjectMerger, NSString;

@interface SXDOMObjectProviderFactory : NSObject <SXDOMObjectProviderFactory> {

	id<SXDocumentControllerProvider> _documentControllerProvider;
	SXJSONObjectMerger* _componentStyleMerger;
	SXJSONObjectMerger* _componentTextStyleMerger;

}

@property (nonatomic,readonly) id<SXDocumentControllerProvider> documentControllerProvider;              //@synthesize documentControllerProvider=_documentControllerProvider - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * componentStyleMerger;                                //@synthesize componentStyleMerger=_componentStyleMerger - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * componentTextStyleMerger;                            //@synthesize componentTextStyleMerger=_componentTextStyleMerger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createDOMObjectProvider;
-(SXJSONObjectMerger *)componentTextStyleMerger;
-(SXJSONObjectMerger *)componentStyleMerger;
-(id<SXDocumentControllerProvider>)documentControllerProvider;
-(id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3 ;
@end

