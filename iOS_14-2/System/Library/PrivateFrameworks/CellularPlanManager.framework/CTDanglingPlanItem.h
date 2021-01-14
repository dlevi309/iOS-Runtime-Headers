/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTUserLabel;

@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _iccid;
	NSString* _phoneNumber;
	NSString* _simLabelID;
	CTUserLabel* _userLabel;

}

@property (nonatomic,retain) NSString * iccid;                     //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * simLabelID;                //@synthesize simLabelID=_simLabelID - In the implementation block
@property (nonatomic,retain) CTUserLabel * userLabel;              //@synthesize userLabel=_userLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CTUserLabel *)userLabel;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)simLabelID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserLabel:(CTUserLabel *)arg1 ;
-(void)setSimLabelID:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3 labelID:(id)arg4 ;
@end

