/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActive:(BOOL)arg1 ;
-(id<GEOTransitRouteUpdaterDelegate>)delegate;
-(BOOL)isActive;
-(NSSet *)requests;
-(void)setDelegate:(id<GEOTransitRouteUpdaterDelegate>)arg1 ;
-(void)setRequests:(NSSet *)arg1 ;
-(id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2 ;
-(void)dealloc;
@end

