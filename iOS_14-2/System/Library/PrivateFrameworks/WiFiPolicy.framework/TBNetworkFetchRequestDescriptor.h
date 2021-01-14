/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBFetchRequestDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, GEOWiFiQualityNetworkSearch, NSDate, TBLocalFetchRequestDescriptor, NSSet, NSString;

@interface TBNetworkFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying> {

	NSPredicate* _localFetchPredicate;
	GEOWiFiQualityNetworkSearch* _remoteRequest;
	unsigned long long _type;
	NSDate* _maxCacheAge;
	TBLocalFetchRequestDescriptor* _localFetchDescriptor;
	TBLocalFetchRequestDescriptor* _preferLocalFetchDescriptor;
	NSSet* _bssids;

}

@property (nonatomic,retain) GEOWiFiQualityNetworkSearch * remoteRequest;                             //@synthesize remoteRequest=_remoteRequest - In the implementation block
@property (nonatomic,retain) NSPredicate * localFetchPredicate;                                       //@synthesize localFetchPredicate=_localFetchPredicate - In the implementation block
@property (nonatomic,retain) NSSet * bssids;                                                          //@synthesize bssids=_bssids - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * maxCacheAge;                                                    //@synthesize maxCacheAge=_maxCacheAge - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * localFetchDescriptor;                    //@synthesize localFetchDescriptor=_localFetchDescriptor - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * preferLocalFetchDescriptor;              //@synthesize preferLocalFetchDescriptor=_preferLocalFetchDescriptor - In the implementation block
@property (nonatomic,readonly) Class remoteRequestClass; 
@property (nonatomic,readonly) NSSet * tileItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(GEOWiFiQualityNetworkSearch *)remoteRequest;
-(void)setType:(unsigned long long)arg1 ;
-(NSSet *)bssids;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBssids:(NSSet *)arg1 ;
-(NSDate *)maxCacheAge;
-(NSPredicate *)localFetchPredicate;
-(void)setMaxCacheAge:(NSDate *)arg1 ;
-(void)setLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(void)setPreferLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(Class)remoteRequestClass;
-(TBLocalFetchRequestDescriptor *)localFetchDescriptor;
-(TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;
-(void)setLocalFetchPredicate:(NSPredicate *)arg1 ;
-(id)initWithBSSIDs:(id)arg1 maxCacheAge:(id)arg2 ;
-(id)initWithBSSIDs:(id)arg1 ;
-(void)setRemoteRequest:(GEOWiFiQualityNetworkSearch *)arg1 ;
@end

