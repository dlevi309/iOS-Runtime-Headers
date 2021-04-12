/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSData;

@interface CKDPushToken : NSObject {

	NSString* _apsEnvironmentString;
	NSData* _apsToken;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
-(NSData *)apsToken;
-(NSString *)apsEnvironmentString;
-(unsigned long long)hash;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setApsToken:(NSData *)arg1 ;
@end

