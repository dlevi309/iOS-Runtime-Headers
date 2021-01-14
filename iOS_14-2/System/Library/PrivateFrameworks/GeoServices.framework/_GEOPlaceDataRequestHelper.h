/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

