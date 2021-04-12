/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXDOM.h>

@class SXMutableComponents, NSMutableDictionary, SXMutableDOMAnalysis, SXMetadata;

@interface SXMutableDOM : SXDOM

@property (nonatomic,copy,readonly) SXMutableComponents * components; 
@property (nonatomic,copy,readonly) NSMutableDictionary * textStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentLayouts; 
@property (nonatomic,copy,readonly) NSMutableDictionary * componentTextStyles; 
@property (nonatomic,copy,readonly) NSMutableDictionary * resources; 
@property (nonatomic,retain) id<SXAutoPlacement> autoPlacement; 
@property (nonatomic,retain) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,copy) SXMutableDOMAnalysis * analysis; 
@property (nonatomic,copy,readonly) SXMetadata * metadata; 
-(void)setDocumentStyle:(id<SXDocumentStyle>)arg1 ;
-(id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 analysis:(id)arg9 metadata:(id)arg10 ;
-(void)setAutoPlacement:(id<SXAutoPlacement>)arg1 ;
-(void)setAnalysis:(SXMutableDOMAnalysis *)arg1 ;
@end

