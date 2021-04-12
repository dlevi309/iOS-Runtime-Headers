/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSDate, CLLocation, NSString;

@interface NTKMoonPhaseModel : NSObject {

	NSDate* _entryDate;
	NSDate* _eventDate;
	CLLocation* _location;
	NSString* _phaseName;
	unsigned long long _phaseNumber;
	long long _hemisphere;
	long long _event;

}

@property (nonatomic,readonly) NSDate * entryDate;                          //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                          //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * phaseName;                        //@synthesize phaseName=_phaseName - In the implementation block
@property (nonatomic,readonly) unsigned long long phaseNumber;              //@synthesize phaseNumber=_phaseNumber - In the implementation block
@property (nonatomic,readonly) long long hemisphere;                        //@synthesize hemisphere=_hemisphere - In the implementation block
@property (nonatomic,readonly) long long event;                             //@synthesize event=_event - In the implementation block
-(CLLocation *)location;
-(long long)event;
-(NSDate *)eventDate;
-(NSDate *)entryDate;
-(id)initWithDate:(id)arg1 location:(id)arg2 ;
-(NSString *)phaseName;
-(unsigned long long)phaseNumber;
-(long long)hemisphere;
@end

