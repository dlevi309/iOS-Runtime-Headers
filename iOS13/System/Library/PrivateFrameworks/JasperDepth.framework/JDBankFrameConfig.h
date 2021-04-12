/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)frameConfig;
-(id)initWithBankId:(int)arg1 andFrameConfig:(id)arg2 ;
@end

