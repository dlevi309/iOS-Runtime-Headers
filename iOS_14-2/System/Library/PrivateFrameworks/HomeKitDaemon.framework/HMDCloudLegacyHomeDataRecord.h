/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)recordType;
-(void)setData:(id)arg1 ;
-(id)data;
-(void)clearData;
-(id)extractObjectChange;
-(unsigned long long)objectEncoding;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
@end

