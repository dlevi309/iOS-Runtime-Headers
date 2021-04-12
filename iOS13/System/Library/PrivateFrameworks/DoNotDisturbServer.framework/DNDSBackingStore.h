/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSBackingStore <NSObject>
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate; 
@required
-(id<DNDSBackingStoreDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)readRecordWithError:(id*)arg1;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;

@end

