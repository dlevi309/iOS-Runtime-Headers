/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _publisherDestination;
	long long _maximumCount;
	NSDate* _sinceDate;
	NSSet* _enabledSectionIDs;

}

@property (nonatomic,retain) NSDate * sinceDate;                                     //@synthesize sinceDate=_sinceDate - In the implementation block
@property (nonatomic,retain) NSSet * enabledSectionIDs;                              //@synthesize enabledSectionIDs=_enabledSectionIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long publisherDestination;              //@synthesize publisherDestination=_publisherDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount; 
+(BOOL)supportsSecureCoding;
+(id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(unsigned long long)maximumCount;
-(id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)publisherDestination;
-(id)description;
-(void)setSinceDate:(NSDate *)arg1 ;
-(NSSet *)enabledSectionIDs;
-(void)setEnabledSectionIDs:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)sinceDate;
@end

