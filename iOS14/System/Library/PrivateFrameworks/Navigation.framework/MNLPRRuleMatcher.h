/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOLPRVehicle, NSArray, _MNLPRPlate, NSDate, NSTimeZone, NSDictionary, NSMutableDictionary;

@interface MNLPRRuleMatcher : NSObject {

	GEOLPRVehicle* _vehicle;
	NSArray* _ruleSets;
	unsigned long long _signpost;
	_MNLPRPlate* _lastPlate;
	NSDate* _lastDate;
	NSTimeZone* _lastTimeZone;
	NSDictionary* _usedRegions;
	NSMutableDictionary* _usedRegionETAs;

}
-(id)initForVehicle:(id)arg1 withRules:(id)arg2 ;
-(id)generateMaskedPlateForWaypoints:(id)arg1 date:(id)arg2 timeZone:(id)arg3 error:(id*)arg4 ;
-(id)debug_jsonDescriptionOfLastPlate;
@end

