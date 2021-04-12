/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContactIDs:(NSArray *)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)contactIDs;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxPeople:(unsigned)arg1 ;
-(unsigned)maxPeople;
@end

