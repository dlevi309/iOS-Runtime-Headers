/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSUUID, RTLearnedLocation, RTLearnedPlace, NSArray, NSString;

@interface RTLearnedLocationOfInterest : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSUUID* _identifier;
	RTLearnedLocation* _location;
	RTLearnedPlace* _place;
	NSArray* _visits;
	NSArray* _transitions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTLearnedLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) RTLearnedPlace * place;                    //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                          //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSArray * transitions;                     //@synthesize transitions=_transitions - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedLocationOfInterestMO:(id)arg1 ;
+(id)createWithLearnedLocationOfInterestVisitMO:(id)arg1 ;
+(unsigned long long)mapItemSourceFromGeoMapItemSource:(unsigned long long)arg1 ;
-(NSArray *)transitions;
-(RTLearnedPlace *)place;
-(id)init;
-(RTLearnedLocation *)location;
-(NSString *)description;
-(unsigned long long)hash;
-(NSArray *)visits;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 place:(id)arg3 visits:(id)arg4 transitions:(id)arg5 ;
-(id)managedObjectWithContext:(id)arg1 ;
-(void)updateManagedObject:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 creationDate:(id)arg2 ;
-(id)filterWithDateInterval:(id)arg1 ;
@end

