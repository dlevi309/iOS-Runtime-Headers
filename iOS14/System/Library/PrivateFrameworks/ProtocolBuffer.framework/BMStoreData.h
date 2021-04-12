/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


@protocol BMStoreData <NSObject>
@property (nonatomic,readonly) unsigned dataVersion; 
@optional
-(id)json;

@required
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2;
-(unsigned)dataVersion;
-(id)serialize;
-(id)init;

@end

