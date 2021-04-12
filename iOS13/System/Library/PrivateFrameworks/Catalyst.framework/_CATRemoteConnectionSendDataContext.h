/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/_CATRemoteConnectionSendContext.h>

@class NSData, NSString;

@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext> {

	NSData* mEncodedData;
	NSData* _data;
	id _userInfo;
	unsigned long long _bytesWritten;

}

@property (nonatomic,copy,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten;                      //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
-(id)userInfo;
-(NSData *)data;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1 ;
-(unsigned long long)clientBytesWritten;
-(unsigned long long)headerLength;
@end

