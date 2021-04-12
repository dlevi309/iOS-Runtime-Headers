/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)uniqueIdentifier;
-(int)transportType;
-(BOOL)isExpired;
-(id)archiveData;
-(void)setTransportType:(int)arg1 ;
-(MNTimepoint *)timepoint;
-(void)setTimepoint:(MNTimepoint *)arg1 ;
-(GEOComposedWaypoint *)destinationWaypoint;
-(id)jsonDictionary;
-(BOOL)isDuplicateOf:(id)arg1 ;
-(void)_setTimepoint:(id)arg1 transportType:(int)arg2 ;
-(id)initWithWaypoint:(id)arg1 transportType:(int)arg2 ;
-(_MNTimepointAndTransportType *)_internalTimepoint;
@end

