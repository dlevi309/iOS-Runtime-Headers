/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@protocol SXDarkModePolicyHandler, SXDarkModeConfiguration, SXNamespacedObjectFactory;
@class NSString;

@interface SXDarkModeModifier : NSObject <SXDOMModifying> {

	id<SXDarkModePolicyHandler> _policyHandler;
	id<SXDarkModeConfiguration> _configuration;
	id<SXNamespacedObjectFactory> _namespacedObjectFactory;

}

@property (nonatomic,readonly) id<SXDarkModePolicyHandler> policyHandler;                          //@synthesize policyHandler=_policyHandler - In the implementation block
@property (nonatomic,readonly) id<SXDarkModeConfiguration> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<SXNamespacedObjectFactory> namespacedObjectFactory;              //@synthesize namespacedObjectFactory=_namespacedObjectFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPolicyHandler:(id)arg1 configuration:(id)arg2 namespacedObjectFactory:(id)arg3 ;
-(id)invertColor:(id)arg1 defaultColor:(id)arg2 ;
-(id)invertedComponentStyle:(id)arg1 context:(id)arg2 ;
-(id)invertedDataTableColumnStyle:(id)arg1 ;
-(id)invertedDataTableCellStyle:(id)arg1 ;
-(id)invertedDataTableBorderSides:(id)arg1 ;
-(id)invertedStrokeStyle:(id)arg1 ;
-(void)invertForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4 ;
-(id<SXNamespacedObjectFactory>)namespacedObjectFactory;
-(id)invertedTextShadow:(id)arg1 ;
-(id)invertedComponentTextStyleForegroundColors:(id)arg1 context:(id)arg2 ;
-(id)invertedTextStyleForegroundColors:(id)arg1 context:(id)arg2 ;
-(id)invertedComponent:(id)arg1 context:(id)arg2 ;
-(id)invertedGradientFill:(id)arg1 ;
-(id)invertedDropCapStyle:(id)arg1 ;
-(void)invertBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4 ;
-(id<SXDarkModeConfiguration>)configuration;
-(id)invertedDocumentStyle:(id)arg1 context:(id)arg2 ;
-(id)invertedDataTableBorder:(id)arg1 ;
-(void)invertComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4 ;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(id)invertedBorder:(id)arg1 ;
-(id)invertedTextStroke:(id)arg1 ;
-(id)invertedComponentTextStyleBackgroundColors:(id)arg1 context:(id)arg2 ;
-(void)invertForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4 ;
-(id)invertedTextDecoration:(id)arg1 ;
-(id)invertedDataTableRowStyle:(id)arg1 ;
-(id)invertedDataTableStyle:(id)arg1 ;
-(id)invertedTextStyleBackgroundColors:(id)arg1 context:(id)arg2 ;
-(id)invertedLinearGradient:(id)arg1 ;
-(id<SXDarkModePolicyHandler>)policyHandler;
-(id)invertedComponentShadow:(id)arg1 ;
-(void)invertBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4 ;
@end

