/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol SXAutoPlacement, SXDocumentStyle;
@class SXComponents, NSDictionary, SXDOMAnalysis, SXMetadata;

@interface SXDOM : NSObject <NSCopying, NSMutableCopying> {

	SXComponents* _components;
	NSDictionary* _componentLayouts;
	NSDictionary* _componentStyles;
	NSDictionary* _componentTextStyles;
	NSDictionary* _textStyles;
	NSDictionary* _resources;
	id<SXAutoPlacement> _autoPlacement;
	id<SXDocumentStyle> _documentStyle;
	SXDOMAnalysis* _analysis;
	SXMetadata* _metadata;

}

@property (nonatomic,copy,readonly) SXComponents * components;                       //@synthesize components=_components - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textStyles;                       //@synthesize textStyles=_textStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentStyles;                  //@synthesize componentStyles=_componentStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentLayouts;                 //@synthesize componentLayouts=_componentLayouts - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentTextStyles;              //@synthesize componentTextStyles=_componentTextStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resources;                        //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement;                    //@synthesize autoPlacement=_autoPlacement - In the implementation block
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle;                    //@synthesize documentStyle=_documentStyle - In the implementation block
@property (nonatomic,copy,readonly) SXDOMAnalysis * analysis;                        //@synthesize analysis=_analysis - In the implementation block
@property (nonatomic,readonly) SXMetadata * metadata;                                //@synthesize metadata=_metadata - In the implementation block
-(id)init;
-(NSDictionary *)resources;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SXComponents *)components;
-(SXDOMAnalysis *)analysis;
-(SXMetadata *)metadata;
-(id<SXDocumentStyle>)documentStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SXAutoPlacement>)autoPlacement;
-(NSDictionary *)componentStyles;
-(NSDictionary *)componentTextStyles;
-(NSDictionary *)componentLayouts;
-(NSDictionary *)textStyles;
-(id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 analysis:(id)arg9 metadata:(id)arg10 ;
@end

