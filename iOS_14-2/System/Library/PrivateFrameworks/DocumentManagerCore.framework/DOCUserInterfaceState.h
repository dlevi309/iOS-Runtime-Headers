/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <DocumentManagerCore/DocumentManagerCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSDictionary, NSDate;

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding> {

	NSData* _mostRecentlyVisitedLocation;
	NSData* _mostRecentEffectiveRootLocation;
	NSNumber* _displayMode;
	NSDictionary* _sortingMode;
	NSNumber* _browseTabSelected;
	NSNumber* _userPrefersTiledSidebarHidden;
	NSDate* _lastUpdatedDate;

}

@property (nonatomic,retain) NSDate * lastUpdatedDate;                              //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSData * mostRecentlyVisitedLocation;                  //@synthesize mostRecentlyVisitedLocation=_mostRecentlyVisitedLocation - In the implementation block
@property (nonatomic,retain) NSData * mostRecentEffectiveRootLocation;              //@synthesize mostRecentEffectiveRootLocation=_mostRecentEffectiveRootLocation - In the implementation block
@property (nonatomic,retain) NSNumber * displayMode;                                //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) NSDictionary * sortingMode;                            //@synthesize sortingMode=_sortingMode - In the implementation block
@property (nonatomic,retain) NSNumber * browseTabSelected;                          //@synthesize browseTabSelected=_browseTabSelected - In the implementation block
@property (nonatomic,retain) NSNumber * userPrefersTiledSidebarHidden;              //@synthesize userPrefersTiledSidebarHidden=_userPrefersTiledSidebarHidden - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSDate *)lastUpdatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)displayMode;
-(id)description;
-(void)setDisplayMode:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(NSDictionary *)sortingMode;
-(void)setSortingMode:(NSDictionary *)arg1 ;
-(void)bumpLastUpdatedDate;
-(void)setMostRecentlyVisitedLocation:(NSData *)arg1 ;
-(void)setMostRecentEffectiveRootLocation:(NSData *)arg1 ;
-(void)setBrowseTabSelected:(NSNumber *)arg1 ;
-(void)setUserPrefersTiledSidebarHidden:(NSNumber *)arg1 ;
-(NSData *)mostRecentlyVisitedLocation;
-(NSData *)mostRecentEffectiveRootLocation;
-(NSNumber *)browseTabSelected;
-(NSNumber *)userPrefersTiledSidebarHidden;
@end

