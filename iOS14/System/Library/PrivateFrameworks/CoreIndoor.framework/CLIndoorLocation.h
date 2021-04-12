/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding> {

	BOOL _requestsGpsAssistance;
	NSString* _locationId;
	NSString* _locationDescription;
	SCD_Struct_CL34 _diagnosticReport;
	SCD_Struct_CL29 _location;
	SCD_Struct_CL31 _locationPrivate;

}

@property (assign,nonatomic) SCD_Struct_CL32 location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL33 locationPrivate;               //@synthesize locationPrivate=_locationPrivate - In the implementation block
@property (nonatomic,retain) NSString * locationId;                         //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,retain) NSString * locationDescription;                //@synthesize locationDescription=_locationDescription - In the implementation block
@property (assign,nonatomic) BOOL requestsGpsAssistance;                    //@synthesize requestsGpsAssistance=_requestsGpsAssistance - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL34 diagnosticReport;              //@synthesize diagnosticReport=_diagnosticReport - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_CL32)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(SCD_Struct_CL32)arg1 ;
-(id)description;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CL34)diagnosticReport;
-(BOOL)requestsGpsAssistance;
-(SCD_Struct_CL33)locationPrivate;
-(void)setLocationPrivate:(SCD_Struct_CL33)arg1 ;
-(void)setRequestsGpsAssistance:(BOOL)arg1 ;
-(void)setDiagnosticReport:(SCD_Struct_CL34)arg1 ;
@end

