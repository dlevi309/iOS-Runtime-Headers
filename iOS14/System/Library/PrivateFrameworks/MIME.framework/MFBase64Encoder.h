/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer {

	const char* _table;
	unsigned long long _left;
	unsigned char _leftovers[3];
	unsigned long long _line;
	unsigned long long _lineBreak;
	char _padChar;

}

@property (assign,nonatomic) unsigned long long lineBreak;              //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) BOOL allowSlash; 
@property (assign,nonatomic) char padChar;                              //@synthesize padChar=_padChar - In the implementation block
-(void)done;
-(void)setStandardLineBreak;
-(void)setAllowSlash:(BOOL)arg1 ;
-(void)setPadChar:(char)arg1 ;
-(char)padChar;
-(long long)appendData:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(void)setLineBreak:(unsigned long long)arg1 ;
-(BOOL)allowSlash;
-(unsigned long long)lineBreak;
@end

