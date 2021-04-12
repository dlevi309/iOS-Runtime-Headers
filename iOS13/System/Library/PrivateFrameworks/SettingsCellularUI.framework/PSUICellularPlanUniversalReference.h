/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 ;
@end

