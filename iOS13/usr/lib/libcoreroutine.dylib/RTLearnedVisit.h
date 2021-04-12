/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)createWithLearnedLocationOfInterestVisitMO:(id)arg1 ;
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedVisitMO:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)identifier;
-(NSDate *)expirationDate;
-(RTLearnedLocation *)location;
-(NSDate *)creationDate;
-(NSDate *)exitDate;
-(NSDate *)entryDate;
-(id)managedObjectWithContext:(id)arg1 ;
-(unsigned long long)placeSource;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 ;
-(void)setPlaceConfidence:(double)arg1 ;
-(void)setPlaceSource:(unsigned long long)arg1 ;
-(id)initWithVisits:(id)arg1 ;
-(double)placeConfidence;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 placeConfidence:(double)arg7 placeSource:(unsigned long long)arg8 ;
-(id)initWithVisit:(id)arg1 locationOfInterest:(id)arg2 creationDate:(id)arg3 expirationDate:(id)arg4 ;
@end

