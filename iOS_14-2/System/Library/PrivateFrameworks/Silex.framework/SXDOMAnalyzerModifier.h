/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class NSString;

@interface SXDOMAnalyzerModifier : NSObject <SXDOMModifying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(void)analyzeComponents:(id)arg1 parent:(id)arg2 DOM:(id)arg3 ;
-(void)analyzeTextComponent:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeScalableImageComponent:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeButtonComponent:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeGalleryComponent:(id)arg1 analysis:(id)arg2 ;
-(void)analyzeDataTableComponent:(id)arg1 DOM:(id)arg2 ;
-(void)analyzeInlineTextStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3 ;
-(void)analyzeFormattedText:(id)arg1 component:(id)arg2 analysis:(id)arg3 ;
-(void)analyzeDataTableStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3 ;
-(void)analyzeDataTableCellStyle:(id)arg1 component:(id)arg2 analysis:(id)arg3 ;
@end

