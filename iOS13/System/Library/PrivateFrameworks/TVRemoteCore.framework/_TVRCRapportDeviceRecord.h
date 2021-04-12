/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject {

	NSString* _ids;
	unsigned long long _transports;

}

@property (nonatomic,copy) NSString * ids;                               //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) unsigned long long transports;              //@synthesize transports=_transports - In the implementation block
-(id)description;
-(NSString *)ids;
-(unsigned long long)transports;
-(void)setTransports:(unsigned long long)arg1 ;
-(void)setIds:(NSString *)arg1 ;
-(id)initWithIDS:(id)arg1 ;
-(BOOL)hasAvailableTransports;
@end

