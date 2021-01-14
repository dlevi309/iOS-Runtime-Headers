/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {

	NSMapTable* _overrideURLs;
	NSString* _uuid;

}
-(id)dictionaryRepresentation;
-(void)delete;
-(void)save;
-(BOOL)isActive;
-(void)makeActive;
-(id)overrideURLs;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)updateWithURLs:(id)arg1 ;
@end

