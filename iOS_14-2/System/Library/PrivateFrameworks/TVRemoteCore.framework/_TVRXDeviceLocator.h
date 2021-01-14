/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_TVRXDeviceQuery *)query;
-(id)init;
-(void)setSearches:(NSMutableDictionary *)arg1 ;
-(void)setQuery:(_TVRXDeviceQuery *)arg1 ;
-(NSMutableDictionary *)searches;
-(void)_timerExpired:(id)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg1 ;
-(void)findDeviceWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSearchForDeviceWithIdentifier:(id)arg1 ;
@end

