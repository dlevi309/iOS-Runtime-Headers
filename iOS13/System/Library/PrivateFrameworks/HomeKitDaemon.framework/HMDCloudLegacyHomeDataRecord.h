/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)recordType;
-(void)clearData;
-(unsigned long long)objectEncoding;
-(id)extractObjectChange;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
@end

