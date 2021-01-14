/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSString, NSMutableString, NSUUID;

@interface PTPObjectInfoDataset : NSObject {

	unsigned _storageID;
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
	unsigned _associationDesc;
	unsigned _sequenceNumber;
	NSString* _filename;
	NSString* _captureDate;
	NSString* _modificationDate;
	NSMutableString* _keywords;
	unsigned _thmFileSize;
	unsigned _objectHandle;
	NSUUID* _relatedUUID;
	long long _intervalSince1970;

}
-(id)modificationDate;
-(id)initWithBytes:(char*)arg1 length:(unsigned)arg2 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setKeywords:(id)arg1 ;
-(id)content;
-(id)initWithData:(id)arg1 contentType:(int)arg2 ;
-(id)init;
-(id)keywords;
-(id)filename;
-(unsigned)sequenceNumber;
-(id)initWithData:(id)arg1 ;
-(id)captureDate;
-(id)description;
-(void)setFilename:(id)arg1 ;
-(id)relatedUUID;
-(unsigned)objectCompressedSize;
-(unsigned)thumbOffset;
-(unsigned)thumbCompressedSize;
-(void)setObjectCompressedSize:(unsigned long long)arg1 ;
-(void)setThumbOffset:(unsigned)arg1 ;
-(void)setThumbCompressedSize:(unsigned)arg1 ;
-(void)setParentObject:(unsigned)arg1 ;
-(void)setModificationDate:(id)arg1 ;
-(id)content:(int)arg1 ;
-(void)dealloc;
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
-(unsigned)objectHandle;
-(void)setObjectHandle:(unsigned)arg1 ;
-(id)initWithBytes:(char*)arg1 length:(unsigned)arg2 contentType:(int)arg3 ;
-(BOOL)contentLengthValid:(unsigned)arg1 forContentType:(int)arg2 ;
-(void)contentLength:(unsigned*)arg1 bufferLength:(unsigned*)arg2 contentType:(int)arg3 ;
-(unsigned)storageID;
-(void)setStorageID:(unsigned)arg1 ;
-(unsigned long long)objectCompressedSize64;
-(unsigned)thmFileSize;
-(void)setThmFileSize:(unsigned)arg1 ;
-(unsigned)associationDesc;
-(void)setAssociationDesc:(unsigned)arg1 ;
-(void)setCaptureDate:(id)arg1 ;
-(void)addCustomKeyword:(id)arg1 withIdentifier:(id)arg2 ;
-(unsigned)objectContentSizeForContentType:(int)arg1 ;
-(unsigned)objectBufferSizeForContentType:(int)arg1 ;
-(long long)intervalSince1970;
@end

