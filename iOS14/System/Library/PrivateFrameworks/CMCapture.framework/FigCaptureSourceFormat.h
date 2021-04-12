/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding> {

	NSDictionary* _formatDictionary;
	opaqueCMFormatDescriptionRef _formatDescription;
	SCD_Struct_BW2 _previewDimensions;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (readonly) unsigned format; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (readonly) NSDictionary * formatDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned)format;
-(BOOL)isExperimental;
-(unsigned)mediaType;
-(BOOL)isDefaultActiveFormat;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)formatDictionary;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

