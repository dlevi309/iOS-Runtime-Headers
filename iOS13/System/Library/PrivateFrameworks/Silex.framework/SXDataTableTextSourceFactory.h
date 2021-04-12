/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3 ;
-(id<SXSmartFieldFactory>)smartFieldFactory;
-(id<SXDocumentLanguageProviding>)documentLanguageProvider;
-(id<SXFontAttributesConstructor>)fontAttributesConstructor;
@end

