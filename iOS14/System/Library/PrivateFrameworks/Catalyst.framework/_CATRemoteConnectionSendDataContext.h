/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1 ;
-(unsigned long long)clientBytesWritten;
-(unsigned long long)headerLength;
@end

