/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSUUID, RTLearnedLocation, NSDate, NSString;

@interface RTLearnedVisit : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSUUID* _identifier;
	RTLearnedLocation* _location;
	NSDate* _entryDate;
	NSDate* _exitDate;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	double _placeConfidence;
	unsigned long long _placeSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double placeConfidence;                      //@synthesize placeConfidence=_placeConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long placeSource;              //@synthesize placeSource=_placeSource - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTLearnedLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * entryDate;                        //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * exitDate;                         //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedLocationOfInterestVisitMO:(id)arg1 ;
+(id)createWithLearnedVisitMO:(id)arg1 ;
-(id)init;
-(RTLearnedLocation *)location;
-(NSDate *)exitDate;
-(NSString *)description;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSDate *)entryDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)managedObjectWithContext:(id)arg1 ;
-(void)updateManagedObject:(id)arg1 ;
-(unsigned long long)placeSource;
-(void)setPlaceConfidence:(double)arg1 ;
-(void)setPlaceSource:(unsigned long long)arg1 ;
-(double)placeConfidence;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 placeConfidence:(double)arg7 placeSource:(unsigned long long)arg8 ;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 ;
-(id)initWithVisit:(id)arg1 locationOfInterest:(id)arg2 creationDate:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithVisits:(id)arg1 ;
@end

