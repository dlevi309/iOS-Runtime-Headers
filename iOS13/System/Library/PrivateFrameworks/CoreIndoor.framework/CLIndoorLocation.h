/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding> {

	BOOL _requestsGpsAssistance;
	NSString* _locationId;
	NSString* _locationDescription;
	SCD_Struct_CL37 _diagnosticReport;
	SCD_Struct_CL32 _location;
	SCD_Struct_CL34 _locationPrivate;

}

@property (assign,nonatomic) SCD_Struct_CL35 location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL36 locationPrivate;               //@synthesize locationPrivate=_locationPrivate - In the implementation block
@property (nonatomic,retain) NSString * locationId;                         //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,retain) NSString * locationDescription;                //@synthesize locationDescription=_locationDescription - In the implementation block
@property (assign,nonatomic) BOOL requestsGpsAssistance;                    //@synthesize requestsGpsAssistance=_requestsGpsAssistance - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL37 diagnosticReport;              //@synthesize diagnosticReport=_diagnosticReport - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CL35)location;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(void)setLocation:(SCD_Struct_CL35)arg1 ;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(SCD_Struct_CL37)diagnosticReport;
-(BOOL)requestsGpsAssistance;
-(SCD_Struct_CL36)locationPrivate;
-(void)setLocationPrivate:(SCD_Struct_CL36)arg1 ;
-(void)setRequestsGpsAssistance:(BOOL)arg1 ;
-(void)setDiagnosticReport:(SCD_Struct_CL37)arg1 ;
@end

