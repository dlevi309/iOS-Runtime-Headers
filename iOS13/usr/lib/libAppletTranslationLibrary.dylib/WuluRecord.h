/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@class NSData;

@interface WuluRecord : NSObject {

	unsigned char _number;
	unsigned short _associatedSerialNumber;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char number;                               //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short associatedSerialNumber;              //@synthesize associatedSerialNumber=_associatedSerialNumber - In the implementation block
+(id)withRecordNumber:(unsigned char)arg1 recordData:(id)arg2 associatedSerialNumber:(unsigned short)arg3 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned char)number;
-(void)setNumber:(unsigned char)arg1 ;
-(unsigned short)associatedSerialNumber;
-(void)setAssociatedSerialNumber:(unsigned short)arg1 ;
@end

