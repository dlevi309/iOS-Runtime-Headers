/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding> {

	NSString* _iccid;

}

@property (nonatomic,retain) NSString * iccid;              //@synthesize iccid=_iccid - In the implementation block
+(id)referenceFromCellularPlanPendingTransfer:(id)arg1 ;
+(id)referenceFromPlanItem:(id)arg1 ;
+(id)referenceFromDanglingPlanItem:(id)arg1 ;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIccid:(id)arg1 ;
@end

