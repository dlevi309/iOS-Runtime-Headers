/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STSStgObject.h>

@interface STStream : STSStgObject {

	StreamRef m_pCStream;

}

@property (nonatomic,readonly) StreamRef cStream; 
-(void)setClass:(SCD_Struct_ST85)arg1 ;
-(void)close;
-(unsigned)getPos;
-(unsigned long long)readUInt64;
-(unsigned)readUInt32;
-(int)readSInt32;
-(id)readBytes:(unsigned)arg1 ;
-(id)getInfo;
-(StreamRef)cStream;
-(void)dealloc;
-(id)initWithCStream:(StreamRef)arg1 ;
-(void)releaseCStream;
-(void)seek:(int)arg1 fromOrigin:(int)arg2 ;
-(char)readChar8;
-(unsigned char)readUInt8;
-(unsigned char)readBool8;
-(short)readSInt16;
-(unsigned short)readUInt16;
-(float)readFloat32;
-(double)readFloat64;
-(unsigned short)readChar16;
-(id)readString16:(unsigned)arg1 ;
-(void)writeBytes:(id)arg1 ;
-(void)writeUInt8:(unsigned char)arg1 ;
-(void)writeChar8:(char)arg1 ;
-(void)writeBool8:(unsigned char)arg1 ;
-(void)writeSInt16:(short)arg1 ;
-(void)writeUInt16:(unsigned short)arg1 ;
-(void)writeSInt32:(int)arg1 ;
-(void)writeUInt32:(unsigned)arg1 ;
-(void)writeFloat32:(float)arg1 ;
-(void)writeFloat64:(double)arg1 ;
-(void)writeChar16:(unsigned short)arg1 ;
-(void)writeString16:(id)arg1 ;
-(void)writeString16NoTerminator:(id)arg1 ;
@end

