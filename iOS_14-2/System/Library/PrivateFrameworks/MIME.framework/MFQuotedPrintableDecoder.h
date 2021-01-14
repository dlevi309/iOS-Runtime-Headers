/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {

	unsigned char _lastEncoded;
	unsigned long long _required;
	BOOL _forTextPart;
	BOOL _badlyEncoded;

}

@property (assign,nonatomic) BOOL forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
-(void)done;
-(void)setForTextPart:(BOOL)arg1 ;
-(long long)appendData:(id)arg1 ;
-(BOOL)forTextPart;
@end

