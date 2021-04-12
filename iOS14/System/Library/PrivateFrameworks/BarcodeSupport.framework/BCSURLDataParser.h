/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSDataParser.h>

@class NSString;

@interface BCSURLDataParser : NSObject <BCSDataParser>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseString:(id)arg1 ;
+(id)parseURL:(id)arg1 ;
+(id)_canonicalizeMessageURL:(id)arg1 ;
+(long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg1 ;
@end

