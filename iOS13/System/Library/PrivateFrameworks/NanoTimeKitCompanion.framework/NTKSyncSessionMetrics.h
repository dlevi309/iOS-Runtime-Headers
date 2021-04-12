/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)bytesSent;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)isResetSync;
-(void)setIsResetSync:(BOOL)arg1 ;
-(unsigned long long)changesSent;
-(void)setChangesSent:(unsigned long long)arg1 ;
@end

