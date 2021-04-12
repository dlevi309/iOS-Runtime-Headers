/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate; 
@required
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(id)currentLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;

@end

