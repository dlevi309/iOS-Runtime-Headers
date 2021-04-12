/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet, NSDate, NSObject;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding> {

	NSOrderedSet* _sections;
	NSDate* _expirationDate;
	NSObject* _assetsHoldToken;
	NSObject* _recordsHoldToken;

}

@property (nonatomic,copy) NSOrderedSet * sections;                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSObject * assetsHoldToken;                    //@synthesize assetsHoldToken=_assetsHoldToken - In the implementation block
@property (nonatomic,copy) NSObject * recordsHoldToken;                   //@synthesize recordsHoldToken=_recordsHoldToken - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(unsigned long long)itemCount;
-(NSOrderedSet *)sections;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(NSObject *)assetsHoldToken;
-(NSObject *)recordsHoldToken;
-(id)initWithSections:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithSections:(id)arg1 expirationDate:(id)arg2 assetsHoldToken:(id)arg3 recordsHoldToken:(id)arg4 ;
-(void)setAssetsHoldToken:(NSObject *)arg1 ;
-(void)setRecordsHoldToken:(NSObject *)arg1 ;
@end

