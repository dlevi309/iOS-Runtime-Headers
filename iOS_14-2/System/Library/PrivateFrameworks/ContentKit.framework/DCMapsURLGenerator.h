/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/DCURLGenerator.h>

@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator {

	NSMutableDictionary* _queryDictionary;
	DCMapsLink* _mapsLink;

}

@property (nonatomic,readonly) NSMutableDictionary * queryDictionary;              //@synthesize queryDictionary=_queryDictionary - In the implementation block
@property (nonatomic,readonly) DCMapsLink * mapsLink;                              //@synthesize mapsLink=_mapsLink - In the implementation block
+(id)URLWithMapsLink:(id)arg1 ;
-(id)query;
-(id)scheme;
-(id)host;
-(id)mapType;
-(id)path;
-(id)directionsMode;
-(id)URL;
-(NSMutableDictionary *)queryDictionary;
-(void)populateQueryDictionary;
-(id)initWithMapsLink:(id)arg1 ;
-(void)setString:(id)arg1 forQueryKey:(id)arg2 ;
-(DCMapsLink *)mapsLink;
@end

