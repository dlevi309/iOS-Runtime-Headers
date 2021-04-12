/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject {

	NSString* _ids;
	unsigned long long _transports;

}

@property (nonatomic,copy) NSString * ids;                               //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) unsigned long long transports;              //@synthesize transports=_transports - In the implementation block
-(NSString *)ids;
-(id)description;
-(void)setIds:(NSString *)arg1 ;
-(unsigned long long)transports;
-(void)setTransports:(unsigned long long)arg1 ;
-(id)initWithIDS:(id)arg1 ;
-(BOOL)hasAvailableTransports;
@end

