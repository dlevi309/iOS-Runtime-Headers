/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextSourceFactory.h>

@protocol SXTextSourceFactory
@end


@protocol SXSmartFieldFactory, SXDocumentLanguageProviding, SXFontAttributesConstructor;
@class NSString;

@interface SXTextSourceFactory : NSObject <SXTextSourceFactory> {

	id<SXSmartFieldFactory> _smartFieldFactory;
	id<SXDocumentLanguageProviding> _documentLanguageProvider;
	id<SXFontAttributesConstructor> _fontAttributesConstructor;

}

@property (nonatomic,readonly) id<SXSmartFieldFactory> smartFieldFactory;                              //@synthesize smartFieldFactory=_smartFieldFactory - In the implementation block
@property (nonatomic,readonly) id<SXDocumentLanguageProviding> documentLanguageProvider;               //@synthesize documentLanguageProvider=_documentLanguageProvider - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributesConstructor> fontAttributesConstructor;              //@synthesize fontAttributesConstructor=_fontAttributesConstructor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3 ;
-(id)createTextSourceWithString:(id)arg1 dataSource:(id)arg2 ;
-(id<SXSmartFieldFactory>)smartFieldFactory;
-(id<SXDocumentLanguageProviding>)documentLanguageProvider;
-(id<SXFontAttributesConstructor>)fontAttributesConstructor;
@end

