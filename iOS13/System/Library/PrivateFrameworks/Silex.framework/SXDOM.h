/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol SXAutoPlacement, SXDocumentStyle;
@class SXComponents, NSDictionary;

@interface SXDOM : NSObject <NSCopying, NSMutableCopying> {

	SXComponents* _components;
	NSDictionary* _componentLayouts;
	NSDictionary* _componentStyles;
	NSDictionary* _componentTextStyles;
	NSDictionary* _textStyles;
	NSDictionary* _resources;
	id<SXAutoPlacement> _autoPlacement;
	id<SXDocumentStyle> _documentStyle;

}

@property (nonatomic,copy,readonly) SXComponents * components;                       //@synthesize components=_components - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textStyles;                       //@synthesize textStyles=_textStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentStyles;                  //@synthesize componentStyles=_componentStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentLayouts;                 //@synthesize componentLayouts=_componentLayouts - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * componentTextStyles;              //@synthesize componentTextStyles=_componentTextStyles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resources;                        //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement;                    //@synthesize autoPlacement=_autoPlacement - In the implementation block
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle;                    //@synthesize documentStyle=_documentStyle - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SXComponents *)components;
-(NSDictionary *)resources;
-(id<SXDocumentStyle>)documentStyle;
-(id<SXAutoPlacement>)autoPlacement;
-(NSDictionary *)componentLayouts;
-(NSDictionary *)componentStyles;
-(NSDictionary *)textStyles;
-(NSDictionary *)componentTextStyles;
-(id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 ;
@end

