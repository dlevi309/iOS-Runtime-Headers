/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSData;

@interface CKDPushToken : NSObject {

	NSString* _apsEnvironmentString;
	NSData* _apsToken;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)apsToken;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)apsEnvironmentString;
-(void)setApsToken:(NSData *)arg1 ;
@end

