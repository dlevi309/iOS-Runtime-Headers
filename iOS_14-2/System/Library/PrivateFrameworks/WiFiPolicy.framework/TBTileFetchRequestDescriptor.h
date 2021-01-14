/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBFetchRequestDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TBLocalFetchRequestDescriptor, NSSet, NSPredicate, NSDate, PBCodable, NSString;

@interface TBTileFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying> {

	TBLocalFetchRequestDescriptor* _localFetchDescriptor;
	unsigned long long _type;
	NSSet* _tileItems;
	TBLocalFetchRequestDescriptor* _preferLocalFetchDescriptor;
	NSPredicate* _localFetchPredicate;
	NSDate* _maxCacheAge;

}

@property (nonatomic,retain) NSSet * tileItems;                                                       //@synthesize tileItems=_tileItems - In the implementation block
@property (nonatomic,retain) NSPredicate * localFetchPredicate;                                       //@synthesize localFetchPredicate=_localFetchPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * localFetchDescriptor;                    //@synthesize localFetchDescriptor=_localFetchDescriptor - In the implementation block
@property (nonatomic,retain) TBLocalFetchRequestDescriptor * preferLocalFetchDescriptor;              //@synthesize preferLocalFetchDescriptor=_preferLocalFetchDescriptor - In the implementation block
@property (nonatomic,retain) NSDate * maxCacheAge;                                                    //@synthesize maxCacheAge=_maxCacheAge - In the implementation block
@property (nonatomic,readonly) PBCodable * remoteRequest; 
@property (nonatomic,readonly) Class remoteRequestClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PBCodable *)remoteRequest;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_preferLocalCacheFetchRequest;
-(NSSet *)tileItems;
-(NSDate *)maxCacheAge;
-(NSPredicate *)localFetchPredicate;
-(void)setMaxCacheAge:(NSDate *)arg1 ;
-(void)setTileItems:(NSSet *)arg1 ;
-(void)setLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(void)setPreferLocalFetchDescriptor:(TBLocalFetchRequestDescriptor *)arg1 ;
-(Class)remoteRequestClass;
-(TBLocalFetchRequestDescriptor *)localFetchDescriptor;
-(TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;
-(void)setLocalFetchPredicate:(NSPredicate *)arg1 ;
-(id)initWithTileItems:(id)arg1 maxCacheAge:(id)arg2 ;
-(id)initWithTileItems:(id)arg1 ;
@end

