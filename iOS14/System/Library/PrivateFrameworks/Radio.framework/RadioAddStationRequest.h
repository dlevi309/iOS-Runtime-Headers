/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioSyncRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest {

	NSDictionary* _matchDictionary;
	long long _persistentID;
	NSMutableDictionary* _stationDictionary;
	NSString* _stationHashForSkipHistoryCopying;

}
-(id)matchDictionary;
-(id)init;
-(void)startWithAddStationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)initWithStation:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)changeList;
-(id)initWithStationDictionary:(id)arg1 ;
-(id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2 ;
@end

