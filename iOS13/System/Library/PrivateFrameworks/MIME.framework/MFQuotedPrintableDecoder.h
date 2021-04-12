/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)appendData:(id)arg1 ;
-(void)done;
-(void)setForTextPart:(BOOL)arg1 ;
-(BOOL)forTextPart;
@end

