/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPLocalLocationStore, PPLocation, NSMutableSet;

@interface PPLocationCache : NSObject {

	PPLocalLocationStore* _locationStore;
	BOOL _valid;
	PPLocation* _home;
	PPLocation* _work;
	NSMutableSet* _homeOrWorkAddresses;

}
-(id)init;
-(void)invalidate;
-(void)_refresh;
-(id)locationForHome;
-(id)locationForWork;
-(id)homeOrWorkAddresses;
-(id)initWithLocationStore:(id)arg1 ;
@end

