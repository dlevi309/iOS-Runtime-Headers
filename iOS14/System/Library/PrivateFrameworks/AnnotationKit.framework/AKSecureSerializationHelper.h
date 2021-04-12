/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@interface AKSecureSerializationHelper : NSObject
+(id)encodeColor:(id)arg1 ;
+(id)decodeColor:(id)arg1 ;
+(id)encodeFont:(id)arg1 ;
+(id)decodeFont:(id)arg1 ;
+(id)encodeTextAttributes:(id)arg1 ;
+(id)decodeTextAttributes:(id)arg1 ;
+(id)_callXPCServiceProxyWithInputData:(id)arg1 andSelector:(SEL)arg2 ;
+(id)_encodeAttributedStringAsRTFData:(id)arg1 ;
+(id)_encodeTextAttributesAsRTFData:(id)arg1 ;
+(void)_decodeTextPropertiesForAnnotation:(id)arg1 withSecureCoder:(id)arg2 ;
+(void)_unsafeLegacyDecodeTextPropertiesForAnnotation:(id)arg1 withNonSecureCoder:(id)arg2 ;
+(id)dataForSecureCodingCompliantObject:(id)arg1 withOptionalKey:(id)arg2 ;
+(id)secureCodingCompliantObjectForData:(id)arg1 ofClasses:(id)arg2 withOptionalKey:(id)arg3 ;
+(id)_decodeTextAttributesFromRTFData:(id)arg1 ;
+(id)_securelyConvertLegacyTextAttributeDataToRTFData:(id)arg1 ;
+(void)_decodeRTFTextPropertiesWithSecureCoder:(id)arg1 annotationTextRTF:(id*)arg2 typingAttributesRTF:(id*)arg3 ;
+(void)_decodeLegacyTextPropertiesWithSecureCoder:(id)arg1 annotationTextRTF:(id*)arg2 typingAttributesRTF:(id*)arg3 ;
+(id)_decodeAttributedStringFromRTFData:(id)arg1 ;
+(id)_securelyConvertLegacyAnnotationArchiveToRTFArchive:(id)arg1 ;
+(id)convertLegacyModelControllerArchive:(id)arg1 ;
+(void)encodeTextPropertiesOfAnnotation:(id)arg1 withCoder:(id)arg2 ;
+(void)decodeTextPropertiesOfAnnotation:(id)arg1 withSecureCoder:(id)arg2 ;
+(id)_unsafeLegacyDecodeTextAttributesFromData:(id)arg1 ;
@end

