/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTransitRouteUpdaterDelegate;
@class NSSet;

@interface GEOTransitRouteUpdater : NSObject {

	id<GEOTransitRouteUpdaterDelegate> _delegate;
	BOOL _active;
	NSSet* _requests;

}

@property (assign,nonatomic,__weak) id<GEOTransitRouteUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * requests;                                                  //@synthesize requests=_requests - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                     //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(id<GEOTransitRouteUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOTransitRouteUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSSet *)requests;
-(id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2 ;
-(void)setRequests:(NSSet *)arg1 ;
@end

