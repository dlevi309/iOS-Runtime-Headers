/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)id;
-(SUAutoInstallForecast *)forecast;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setId:(NSUUID *)arg1 ;
-(void)setForecast:(SUAutoInstallForecast *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setAgreementStatus:(int)arg1 ;
-(int)agreementStatus;
@end

