/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRXDeviceQueryDelegate.h>

@class _TVRXDeviceQuery, NSMutableDictionary, NSString;

@interface _TVRXDeviceLocator : NSObject <_TVRXDeviceQueryDelegate> {

	_TVRXDeviceQuery* _query;
	NSMutableDictionary* _searches;

}

@property (nonatomic,retain) _TVRXDeviceQuery * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * searches;              //@synthesize searches=_searches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_TVRXDeviceQuery *)query;
-(void)setQuery:(_TVRXDeviceQuery *)arg1 ;
-(void)_timerExpired:(id)arg1 ;
-(NSMutableDictionary *)searches;
-(void)setSearches:(NSMutableDictionary *)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg1 ;
-(void)findDeviceWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSearchForDeviceWithIdentifier:(id)arg1 ;
@end

