/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

@class SUDescriptor;


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@required
-(SUDescriptor *)descriptor;
-(void)setDescriptor:(id)arg1;
-(id)initWithDescriptor:(id)arg1;
-(BOOL)isDownloadable;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isSamePolicy:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2;

@end

