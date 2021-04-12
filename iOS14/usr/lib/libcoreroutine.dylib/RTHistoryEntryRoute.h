/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSUUID, NSDate, RTLocation, RTMapItem;

@interface RTHistoryEntryRoute : NSObject {

	BOOL _navigationWasInterrupted;
	NSUUID* _identifier;
	NSDate* _usageDate;
	RTLocation* _originLocation;
	RTMapItem* _originMapItem;
	RTLocation* _destinationLocation;
	RTMapItem* _destinationMapItem;

}

@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * usageDate;                            //@synthesize usageDate=_usageDate - In the implementation block
@property (nonatomic,readonly) RTLocation * originLocation;                   //@synthesize originLocation=_originLocation - In the implementation block
@property (nonatomic,readonly) RTMapItem * originMapItem;                     //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) RTLocation * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) RTMapItem * destinationMapItem;                //@synthesize destinationMapItem=_destinationMapItem - In the implementation block
@property (nonatomic,readonly) BOOL navigationWasInterrupted;                 //@synthesize navigationWasInterrupted=_navigationWasInterrupted - In the implementation block
-(id)init;
-(RTMapItem *)destinationMapItem;
-(BOOL)navigationWasInterrupted;
-(NSDate *)usageDate;
-(id)description;
-(RTMapItem *)originMapItem;
-(RTLocation *)destinationLocation;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 usageDate:(id)arg2 originLocation:(id)arg3 originMapItem:(id)arg4 destinationLocation:(id)arg5 destinationMapItem:(id)arg6 navigationWasInterrupted:(BOOL)arg7 ;
-(RTLocation *)originLocation;
@end

