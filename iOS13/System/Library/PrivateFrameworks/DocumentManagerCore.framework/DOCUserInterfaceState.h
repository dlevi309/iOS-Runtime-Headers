/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSDate* _lastUpdatedDate;

}

@property (nonatomic,retain) NSDate * lastUpdatedDate;                              //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSData * mostRecentlyVisitedLocation;                  //@synthesize mostRecentlyVisitedLocation=_mostRecentlyVisitedLocation - In the implementation block
@property (nonatomic,retain) NSData * mostRecentEffectiveRootLocation;              //@synthesize mostRecentEffectiveRootLocation=_mostRecentEffectiveRootLocation - In the implementation block
@property (nonatomic,retain) NSNumber * displayMode;                                //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) NSDictionary * sortingMode;                            //@synthesize sortingMode=_sortingMode - In the implementation block
@property (nonatomic,retain) NSNumber * browseTabSelected;                          //@synthesize browseTabSelected=_browseTabSelected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)displayMode;
-(void)setDisplayMode:(NSNumber *)arg1 ;
-(void)bumpLastUpdatedDate;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(NSDictionary *)sortingMode;
-(void)setSortingMode:(NSDictionary *)arg1 ;
-(void)setMostRecentlyVisitedLocation:(NSData *)arg1 ;
-(void)setMostRecentEffectiveRootLocation:(NSData *)arg1 ;
-(void)setBrowseTabSelected:(NSNumber *)arg1 ;
-(NSData *)mostRecentlyVisitedLocation;
-(NSData *)mostRecentEffectiveRootLocation;
-(NSNumber *)browseTabSelected;
@end

