/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {

	NSDate* _earliestCreationDate;
	NSDate* _latestCreationDate;
	NSDate* _latestTombstoneDate;
	long long _version;

}

@property (nonatomic,copy,readonly) NSDate * earliestCreationDate;              //@synthesize earliestCreationDate=_earliestCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestCreationDate;                //@synthesize latestCreationDate=_latestCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestTombstoneDate;               //@synthesize latestTombstoneDate=_latestTombstoneDate - In the implementation block
@property (nonatomic,readonly) long long version;                               //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)baseBookmarkWithVersion:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(id)initWithEarliestCreationDate:(id)arg1 latestCreationDate:(id)arg2 latestTombstoneDate:(id)arg3 version:(long long)arg4 ;
-(NSDate *)latestCreationDate;
-(NSDate *)latestTombstoneDate;
-(NSDate *)earliestCreationDate;
-(id)updatedBookmarkWithEarliestCreationDate:(id)arg1 ;
-(id)updatedBookmarkWithLatestCreationDate:(id)arg1 ;
-(id)updatedBookmarkWithLatestTombstoneDate:(id)arg1 ;
@end

