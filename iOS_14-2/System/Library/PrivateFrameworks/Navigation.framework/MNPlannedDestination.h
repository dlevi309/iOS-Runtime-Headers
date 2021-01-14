/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedWaypoint, NSDate, _MNTimepointAndTransportType, NSUUID, MNTimepoint, NSString;

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying> {

	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _expirationDate;
	_MNTimepointAndTransportType* _internalTimepoint;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) _MNTimepointAndTransportType * _internalTimepoint;              //@synthesize internalTimepoint=_internalTimepoint - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                      //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (assign,nonatomic) int transportType; 
@property (nonatomic,copy) MNTimepoint * timepoint; 
@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)destinationFromArchiveData:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setTimepoint:(MNTimepoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)debugDescription;
-(int)transportType;
-(MNTimepoint *)timepoint;
-(NSString *)description;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedWaypoint *)destinationWaypoint;
-(id)archiveData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDuplicateOf:(id)arg1 ;
-(void)_setTimepoint:(id)arg1 transportType:(int)arg2 ;
-(id)initWithWaypoint:(id)arg1 transportType:(int)arg2 ;
-(_MNTimepointAndTransportType *)_internalTimepoint;
@end

