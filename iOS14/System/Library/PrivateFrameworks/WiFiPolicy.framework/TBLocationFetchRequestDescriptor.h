/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBFetchRequestDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBCodable, TBLocalFetchRequestDescriptor, NSSet, NSPredicate, NSDate, NSString;

@interface TBLocationFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying> {

	NSPredicate* _localFetchPredicate;
	PBCodable* _remoteRequest;
	unsigned long long _type;
	NSDate* _maxCacheAge;
	TBLocalFetchRequestDescriptor* _localFetchDescriptor;
	TBLocalFetchRequestDescriptor* _preferLocalFetchDescriptor;
	NSSet* _tileItems;
	unsigned long long _primaryTileKey;
	double _latitude;
	double _longitude;

}

@property (nonatomic,retain) NSPredicate * localFetchPredicate;                                       //@synthesize localFetchPredicate=_localFetchPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSSet * tileItems;                                                       //@synthesize tileItems=_tileItems - In the implementation block
@property (assign,nonatomic) unsigned long long primaryTileKey;                                       //@synthesize primaryTileKey=_primaryTileKey - In the implementation block
@property (nonatomic,retain) NSDate * maxCacheAge;                                                    //@synthesize maxCacheAge=_maxCacheAge - In the implementation block
@property (assign,nonatomic) double latitude;                                                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                                        //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * localFetchDescriptor;                    //@synthesize localFetchDescriptor=_localFetchDescriptor - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * preferLocalFetchDescriptor;              //@synthesize preferLocalFetchDescriptor=_preferLocalFetchDescriptor - In the implementation block
@property (nonatomic,readonly) PBCodable * remoteRequest;                                             //@synthesize remoteRequest=_remoteRequest - In the implementation block
@property (nonatomic,readonly) Class remoteRequestClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(PBCodable *)remoteRequest;
-(void)setType:(unsigned long long)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 maxCacheAge:(id)arg4 ;
-(id)_localFetchRequest;
-(id)_preferLocalCacheFetchRequest;
-(NSSet *)tileItems;
-(NSDate *)maxCacheAge;
-(NSPredicate *)localFetchPredicate;
-(void)setMaxCacheAge:(NSDate *)arg1 ;
-(unsigned long long)primaryTileKey;
-(void)setPrimaryTileKey:(unsigned long long)arg1 ;
-(void)setTileItems:(NSSet *)arg1 ;
-(void)setLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(void)setPreferLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(Class)remoteRequestClass;
-(TBLocalFetchRequestDescriptor *)localFetchDescriptor;
-(TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 maxCacheAge:(id)arg3 ;
-(void)setLocalFetchPredicate:(NSPredicate *)arg1 ;
@end

