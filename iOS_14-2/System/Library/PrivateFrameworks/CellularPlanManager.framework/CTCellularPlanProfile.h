/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSelected;
	BOOL _isBootstrap;
	BOOL _isDisableNotAllowed;
	BOOL _isDeleteNotAllowed;
	BOOL _requiresUserConsent;
	NSData* _profileId;
	NSString* _iccid;

}

@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL isBootstrap;                      //@synthesize isBootstrap=_isBootstrap - In the implementation block
@property (assign,nonatomic) BOOL isDisableNotAllowed;              //@synthesize isDisableNotAllowed=_isDisableNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL isDeleteNotAllowed;               //@synthesize isDeleteNotAllowed=_isDeleteNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;              //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,copy) NSData * profileId;                      //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * iccid;                        //@synthesize iccid=_iccid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)profileId;
-(void)setProfileId:(NSData *)arg1 ;
-(BOOL)isDeleteNotAllowed;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(BOOL)isDisableNotAllowed;
-(void)setIsBootstrap:(BOOL)arg1 ;
-(void)setIsDisableNotAllowed:(BOOL)arg1 ;
-(void)setIsDeleteNotAllowed:(BOOL)arg1 ;
-(id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(BOOL)arg3 bootstrap:(BOOL)arg4 disableNotAllowed:(BOOL)arg5 deleteNotAllowed:(BOOL)arg6 requiresUserConsent:(BOOL)arg7 ;
-(BOOL)isBootstrap;
@end

