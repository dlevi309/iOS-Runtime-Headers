/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)scheme;
-(id)host;
-(id)query;
-(id)path;
-(id)URL;
-(id)mapType;
-(NSMutableDictionary *)queryDictionary;
-(void)populateQueryDictionary;
-(id)directionsMode;
-(id)initWithMapsLink:(id)arg1 ;
-(void)setString:(id)arg1 forQueryKey:(id)arg2 ;
-(DCMapsLink *)mapsLink;
@end

