/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSDictionary, NSMutableSet, NSMutableArray;

@interface _GEOPlaceDataRequestHelper : NSObject {

	/*^block*/id _requestHandler;
	NSDictionary* _identifierOrderMap;
	NSMutableSet* _remaningIdentifiers;
	NSMutableArray* _results;

}
+(id)helperForHandler:(/*^block*/id)arg1 identifiers:(id)arg2 ;
+(id)helperExpiredIdentifiers:(id)arg1 ;
-(id)description;
-(BOOL)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)failAllRemainingRequests;
@end

