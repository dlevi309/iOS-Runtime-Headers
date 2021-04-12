/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUDownloadPolicy.h>

@class SUDescriptor, SUCarrierDownloadPolicyProperties, SUNetworkMonitor, NSString;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {

	SUDescriptor* _descriptor;
	SUCarrierDownloadPolicyProperties* _carrierPolicy;
	SUNetworkMonitor* _networkMonitor;
	BOOL _cellularCapable;

}

@property (nonatomic,retain) SUCarrierDownloadPolicyProperties * carrierPolicy;              //@synthesize carrierPolicy=_carrierPolicy - In the implementation block
@property (assign,getter=isCellularCapable,nonatomic) BOOL cellularCapable;                  //@synthesize cellularCapable=_cellularCapable - In the implementation block
@property (nonatomic,retain) SUNetworkMonitor * networkMonitor;                              //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SUDescriptor * descriptor;                                      //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(SUDescriptor *)descriptor;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isDownloadable;
-(SUNetworkMonitor *)networkMonitor;
-(void)setNetworkMonitor:(SUNetworkMonitor *)arg1 ;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isSamePolicy:(id)arg1 ;
-(id)_stringForBool:(BOOL)arg1 ;
-(BOOL)_isCellularCapable;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3 ;
-(BOOL)_isDownloadableForNetworkType:(int)arg1 error:(long long*)arg2 cellularFeesApply:(BOOL*)arg3 powerRequired:(BOOL*)arg4 ;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 ;
-(SUCarrierDownloadPolicyProperties *)carrierPolicy;
-(void)setCarrierPolicy:(SUCarrierDownloadPolicyProperties *)arg1 ;
-(BOOL)isCellularCapable;
-(void)setCellularCapable:(BOOL)arg1 ;
@end

