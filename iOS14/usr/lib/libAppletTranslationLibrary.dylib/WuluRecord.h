/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@class NSData;

@interface WuluRecord : NSObject {

	unsigned char _sfi;
	unsigned char _number;
	unsigned short _associatedSerialNumber;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char sfi;                                  //@synthesize sfi=_sfi - In the implementation block
@property (assign,nonatomic) unsigned char number;                               //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short associatedSerialNumber;              //@synthesize associatedSerialNumber=_associatedSerialNumber - In the implementation block
+(id)withRecordSfi:(unsigned char)arg1 recordNumber:(unsigned char)arg2 recordData:(id)arg3 associatedSerialNumber:(unsigned short)arg4 ;
-(void)setNumber:(unsigned char)arg1 ;
-(unsigned char)sfi;
-(unsigned char)number;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setSfi:(unsigned char)arg1 ;
-(unsigned short)associatedSerialNumber;
-(void)setAssociatedSerialNumber:(unsigned short)arg1 ;
@end

