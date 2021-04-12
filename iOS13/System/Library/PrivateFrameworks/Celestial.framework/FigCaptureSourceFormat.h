/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding> {

	NSDictionary* _formatDictionary;
	opaqueCMFormatDescriptionRef _formatDescription;
	SCD_Struct_BW19 _previewDimensions;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (readonly) unsigned format; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)format;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)isDefaultActiveFormat;
-(BOOL)isExperimental;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
@end

