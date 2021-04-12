/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTransitVehicleUpdaterDelegate;
@class NSSet;

@interface GEOTransitVehicleUpdater : NSObject {

	id<GEOTransitVehicleUpdaterDelegate> _delegate;
	BOOL _active;
	NSSet* _tripIDs;

}

@property (assign,nonatomic,__weak) id<GEOTransitVehicleUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * tripIDs;                                                     //@synthesize tripIDs=_tripIDs - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                       //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(id<GEOTransitVehicleUpdaterDelegate>)delegate;
-(BOOL)isActive;
-(NSSet *)tripIDs;
-(void)setDelegate:(id<GEOTransitVehicleUpdaterDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setTripIDs:(NSSet *)arg1 ;
-(void)dealloc;
@end

