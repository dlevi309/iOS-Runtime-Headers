/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {

	NSMapTable* _overrideURLs;
	NSString* _uuid;

}
-(BOOL)isActive;
-(id)dictionaryRepresentation;
-(void)save;
-(void)delete;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)makeActive;
-(void)updateWithURLs:(id)arg1 ;
-(id)overrideURLs;
@end

