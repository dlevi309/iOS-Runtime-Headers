/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithAddStationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)initWithStation:(id)arg1 ;
-(id)matchDictionary;
-(id)changeList;
-(id)initWithStationDictionary:(id)arg1 ;
-(id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2 ;
@end

