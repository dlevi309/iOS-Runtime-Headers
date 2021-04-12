/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol _CATRemoteConnectionSendContext <NSObject>
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten; 
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@required
-(id)userInfo;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1;
-(unsigned long long)clientBytesWritten;

@end

