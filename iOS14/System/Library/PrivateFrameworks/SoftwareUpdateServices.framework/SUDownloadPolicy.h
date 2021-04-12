/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

@class SUDescriptor;


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@property (assign,nonatomic) int cellularFeeAgreementStatus; 
@required
-(id)initWithDescriptor:(id)arg1;
-(SUDescriptor *)descriptor;
-(BOOL)isDownloadable;
-(void)setDescriptor:(id)arg1;
-(void)setCellularFeeAgreementStatus:(int)arg1;
-(int)cellularFeeAgreementStatus;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)allowExpensiveNetwork;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isPowerRequired;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isSamePolicy:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
-(unsigned long long)wifiOnlyPeriodInDays;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2;

@end

