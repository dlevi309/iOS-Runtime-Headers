/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFeedGroupEmittingCursor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface FCNewFavoriteFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying> {

	NSSet* _tagIDsReturned;

}

@property (nonatomic,copy) NSSet * tagIDsReturned;              //@synthesize tagIDsReturned=_tagIDsReturned - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)tagIDsReturned;
-(void)setTagIDsReturned:(NSSet *)arg1 ;
@end

