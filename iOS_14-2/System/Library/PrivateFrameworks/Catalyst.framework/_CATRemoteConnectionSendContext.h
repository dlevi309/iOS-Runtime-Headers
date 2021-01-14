/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

