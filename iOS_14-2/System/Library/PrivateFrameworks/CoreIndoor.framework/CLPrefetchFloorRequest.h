/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding> {

	BOOL _hasCompleteFloor;
	BOOL _allowCellularDownload;
	NSString* _floorUuid;
	NSString* _venueUuid;
	NSDate* _relevancy;
	long long _locationContext;
	long long _priority;

}

@property (nonatomic,retain) NSString * floorUuid;                    //@synthesize floorUuid=_floorUuid - In the implementation block
@property (nonatomic,retain) NSString * venueUuid;                    //@synthesize venueUuid=_venueUuid - In the implementation block
@property (nonatomic,retain) NSDate * relevancy;                      //@synthesize relevancy=_relevancy - In the implementation block
@property (assign,nonatomic) BOOL hasCompleteFloor;                   //@synthesize hasCompleteFloor=_hasCompleteFloor - In the implementation block
@property (assign,nonatomic) BOOL allowCellularDownload;              //@synthesize allowCellularDownload=_allowCellularDownload - In the implementation block
@property (assign,nonatomic) long long locationContext;               //@synthesize locationContext=_locationContext - In the implementation block
@property (assign,nonatomic) long long priority;                      //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)prefetchRequestForFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)relevancy;
-(id)description;
-(void)setRelevancy:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)locationContext;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 ;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(BOOL)arg4 allowCellularDownload:(BOOL)arg5 locationContext:(long long)arg6 ;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(BOOL)arg4 allowCellularDownload:(BOOL)arg5 locationContext:(long long)arg6 ranking:(long long)arg7 ;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(BOOL)arg4 allowCellularDownload:(BOOL)arg5 locationContext:(long long)arg6 priority:(long long)arg7 ;
-(NSString *)floorUuid;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 priority:(long long)arg5 ;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 ranking:(long long)arg5 ;
-(id)floorUid;
-(void)setFloorUid:(id)arg1 ;
-(void)setFloorUuid:(NSString *)arg1 ;
-(NSString *)venueUuid;
-(void)setVenueUuid:(NSString *)arg1 ;
-(BOOL)hasCompleteFloor;
-(void)setHasCompleteFloor:(BOOL)arg1 ;
-(BOOL)allowCellularDownload;
-(void)setAllowCellularDownload:(BOOL)arg1 ;
-(void)setLocationContext:(long long)arg1 ;
@end

