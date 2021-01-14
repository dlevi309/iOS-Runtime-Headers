/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(long long)appendData:(id)arg1 ;
@end

