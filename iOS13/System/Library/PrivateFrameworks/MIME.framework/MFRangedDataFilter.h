/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {

	NSRange _range;
	unsigned long long _consumedLength;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(id)rangedFilterWithConsumer:(id)arg1 range:(NSRange)arg2 ;
+(id)rangedFilterWithConsumers:(id)arg1 range:(NSRange)arg2 ;
-(long long)appendData:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

