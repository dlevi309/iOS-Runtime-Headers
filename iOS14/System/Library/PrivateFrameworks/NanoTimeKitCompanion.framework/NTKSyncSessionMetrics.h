/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKSyncSessionMetrics : NSObject {

	BOOL _isResetSync;
	BOOL _didSucceed;
	unsigned long long _changesSent;
	unsigned long long _bytesSent;

}

@property (assign,nonatomic) BOOL isResetSync;                            //@synthesize isResetSync=_isResetSync - In the implementation block
@property (assign,nonatomic) unsigned long long changesSent;              //@synthesize changesSent=_changesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                             //@synthesize didSucceed=_didSucceed - In the implementation block
-(void)setBytesSent:(unsigned long long)arg1 ;
-(BOOL)didSucceed;
-(unsigned long long)bytesSent;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)isResetSync;
-(void)setIsResetSync:(BOOL)arg1 ;
-(unsigned long long)changesSent;
-(void)setChangesSent:(unsigned long long)arg1 ;
@end

