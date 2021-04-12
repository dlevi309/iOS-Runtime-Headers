/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<GEOTransitVehicleUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOTransitVehicleUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)tripIDs;
-(void)setTripIDs:(NSSet *)arg1 ;
@end

