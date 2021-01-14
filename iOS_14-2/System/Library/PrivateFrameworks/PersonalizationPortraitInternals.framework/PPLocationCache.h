/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)locationForHome;
-(id)locationForWork;
-(id)init;
-(id)homeOrWorkAddresses;
-(void)_refresh;
-(void)invalidate;
-(id)initWithLocationStore:(id)arg1 ;
@end

