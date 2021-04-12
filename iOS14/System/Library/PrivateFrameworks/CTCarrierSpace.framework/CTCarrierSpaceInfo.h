/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding> {

	CTCarrierSpaceUsageInfo* _usageInfo;
	CTCarrierSpacePlansInfo* _plansInfo;
	CTCarrierSpaceAppsInfo* _appsInfo;

}

@property (nonatomic,retain) CTCarrierSpaceUsageInfo * usageInfo;              //@synthesize usageInfo=_usageInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpacePlansInfo * plansInfo;              //@synthesize plansInfo=_plansInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceAppsInfo * appsInfo;                //@synthesize appsInfo=_appsInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CTCarrierSpaceUsageInfo *)usageInfo;
-(CTCarrierSpaceAppsInfo *)appsInfo;
-(CTCarrierSpacePlansInfo *)plansInfo;
-(void)setUsageInfo:(CTCarrierSpaceUsageInfo *)arg1 ;
-(void)setPlansInfo:(CTCarrierSpacePlansInfo *)arg1 ;
-(void)setAppsInfo:(CTCarrierSpaceAppsInfo *)arg1 ;
@end

