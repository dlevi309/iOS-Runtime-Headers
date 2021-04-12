/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _id;
	SUAutoInstallForecast* _forecast;
	int _agreementStatus;

}

@property (nonatomic,retain) NSUUID * id;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) SUAutoInstallForecast * forecast;              //@synthesize forecast=_forecast - In the implementation block
@property (assign,nonatomic) int agreementStatus;                           //@synthesize agreementStatus=_agreementStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)id;
-(SUAutoInstallForecast *)forecast;
-(void)setForecast:(SUAutoInstallForecast *)arg1 ;
-(void)setAgreementStatus:(int)arg1 ;
-(void)setId:(NSUUID *)arg1 ;
-(int)agreementStatus;
@end

