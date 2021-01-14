/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXDataTableTextSourceFactory.h>

@protocol SXDataTableTextSourceFactory <NSObject>
@required
-(id)textSourceWithFormattedText:(id)arg1 indexPath:(NSRange)arg2 dataSource:(id)arg3;

@end


@protocol SXSmartFieldFactory, SXDocumentLanguageProviding, SXFontAttributesConstructor;
@class NSString;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory> {

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
-(id)textSourceWithFormattedText:(id)arg1 indexPath:(NSRange)arg2 dataSource:(id)arg3 ;
-(id<SXFontAttributesConstructor>)fontAttributesConstructor;
-(id<SXSmartFieldFactory>)smartFieldFactory;
-(id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3 ;
-(id<SXDocumentLanguageProviding>)documentLanguageProvider;
@end

