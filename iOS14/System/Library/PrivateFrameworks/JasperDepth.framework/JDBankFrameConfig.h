/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


@class NSData;

@interface JDBankFrameConfig : NSObject {

	int _bankId;
	NSData* _frameConfig;

}

@property (readonly) int bankId;                        //@synthesize bankId=_bankId - In the implementation block
@property (readonly) NSData * frameConfig;              //@synthesize frameConfig=_frameConfig - In the implementation block
-(int)bankId;
-(id)initWithBankId:(int)arg1 andFrameConfig:(id)arg2 ;
-(NSData *)frameConfig;
@end

