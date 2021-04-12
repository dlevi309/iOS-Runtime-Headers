/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding> {

	unsigned _flags;
	unsigned _maxPeople;
	NSArray* _contactIDs;

}

@property (nonatomic,copy) NSArray * contactIDs;              //@synthesize contactIDs=_contactIDs - In the implementation block
@property (assign,nonatomic) unsigned flags;                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned maxPeople;              //@synthesize maxPeople=_maxPeople - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(NSArray *)contactIDs;
-(void)setContactIDs:(NSArray *)arg1 ;
-(unsigned)maxPeople;
-(void)setMaxPeople:(unsigned)arg1 ;
@end

