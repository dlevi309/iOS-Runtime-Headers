/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSString;

@interface MSObjectInfoDataset : NSObject {

	unsigned short _objectFormat;
	unsigned short _protectionStatus;
	unsigned long long _objectCompressedSize;
	unsigned short _thumbFormat;
	unsigned _thumbCompressedSize;
	unsigned _thumbOffset;
	unsigned _thumbPixWidth;
	unsigned _thumbPixHeight;
	unsigned _imagePixWidth;
	unsigned _imagePixHeight;
	unsigned _imageBitDepth;
	unsigned _parentObject;
	unsigned short _associationType;
	unsigned _objectHandle;
	unsigned short _imageOrientation;
	unsigned long long _captureDate_tvsec;
	unsigned long long _modificationDate_tvsec;
	NSString* _filename;

}
-(id)initWithBytes:(char*)arg1 length:(unsigned)arg2 ;
-(id)content;
-(id)init;
-(id)filename;
-(id)initWithData:(id)arg1 ;
-(void)setFilename:(id)arg1 ;
-(unsigned long long)objectCompressedSize;
-(unsigned)thumbOffset;
-(unsigned)thumbCompressedSize;
-(void)setObjectCompressedSize:(unsigned long long)arg1 ;
-(void)setThumbOffset:(unsigned)arg1 ;
-(void)setThumbCompressedSize:(unsigned)arg1 ;
-(void)setParentObject:(unsigned)arg1 ;
-(void)dealloc;
-(void)contentLength:(unsigned*)arg1 bufferLength:(unsigned*)arg2 ;
-(unsigned short)objectFormat;
-(void)setObjectFormat:(unsigned short)arg1 ;
-(unsigned short)protectionStatus;
-(void)setProtectionStatus:(unsigned short)arg1 ;
-(unsigned short)thumbFormat;
-(void)setThumbFormat:(unsigned short)arg1 ;
-(unsigned)thumbPixWidth;
-(void)setThumbPixWidth:(unsigned)arg1 ;
-(unsigned)thumbPixHeight;
-(void)setThumbPixHeight:(unsigned)arg1 ;
-(unsigned)imagePixWidth;
-(void)setImagePixWidth:(unsigned)arg1 ;
-(unsigned)imagePixHeight;
-(void)setImagePixHeight:(unsigned)arg1 ;
-(unsigned)imageBitDepth;
-(void)setImageBitDepth:(unsigned)arg1 ;
-(unsigned)parentObject;
-(unsigned short)associationType;
-(void)setAssociationType:(unsigned short)arg1 ;
-(unsigned long long)captureDate_tvsec;
-(void)setCaptureDate_tvsec:(unsigned long long)arg1 ;
-(void)setImageOrietation:(unsigned short)arg1 ;
-(unsigned short)imageOrietation;
-(unsigned long long)modificationDate_tvsec;
-(void)setModificationDate_tvsec:(unsigned long long)arg1 ;
-(unsigned)objectHandle;
-(void)setObjectHandle:(unsigned)arg1 ;
@end

