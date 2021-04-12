/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {

	NSMutableData* _leftovers;
	unsigned _decodedBits;
	unsigned long long _validBytes;
	unsigned long long _equalCount;
	const char* _table;
	BOOL _bound;

}

@property (assign,nonatomic) BOOL convertCommas; 
@property (assign,nonatomic) BOOL isBound;                                  //@synthesize bound=_bound - In the implementation block
@property (nonatomic,readonly) unsigned long long unconverted;              //@synthesize validBytes=_validBytes - In the implementation block
+(BOOL)isValidBase64:(id)arg1 ;
-(void)done;
-(BOOL)isBound;
-(long long)appendData:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(BOOL)convertCommas;
-(unsigned long long)_decodeBytes:(const char*)arg1 end:(const char*)arg2 into:(char*)arg3 length:(unsigned long long)arg4 startingAt:(unsigned long long)arg5 outEncodedOffset:(unsigned long long*)arg6 ;
-(void)setConvertCommas:(BOOL)arg1 ;
-(unsigned long long)unconverted;
-(void)setIsBound:(BOOL)arg1 ;
@end

