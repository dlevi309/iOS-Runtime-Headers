/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)tagIDsReturned;
-(void)setTagIDsReturned:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

