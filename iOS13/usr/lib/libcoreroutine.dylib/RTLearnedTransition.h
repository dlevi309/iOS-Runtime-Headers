/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSUUID, NSDate, NSString;

@interface RTLearnedTransition : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _stopDate;
	NSUUID* _visitIdentifierOrigin;
	NSUUID* _visitIdentifierDestination;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	unsigned long long _predominantMotionActivityType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * stopDate;                                           //@synthesize stopDate=_stopDate - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierOrigin;                              //@synthesize visitIdentifierOrigin=_visitIdentifierOrigin - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierDestination;                         //@synthesize visitIdentifierDestination=_visitIdentifierDestination - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                       //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long predominantMotionActivityType;              //@synthesize predominantMotionActivityType=_predominantMotionActivityType - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedTransitionMO:(id)arg1 ;
+(id)createWithLearnedLocationOfInterestTransitionMO:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(NSDate *)stopDate;
-(NSUUID *)visitIdentifierOrigin;
-(NSUUID *)visitIdentifierDestination;
-(unsigned long long)predominantMotionActivityType;
-(id)managedObjectWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 creationDate:(id)arg6 expirationDate:(id)arg7 predominantMotionActivityType:(unsigned long long)arg8 ;
-(void)setPredominantMotionActivityType:(unsigned long long)arg1 ;
@end

