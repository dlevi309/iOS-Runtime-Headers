/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

