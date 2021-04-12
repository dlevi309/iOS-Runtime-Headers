/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFeedGroupEmittingCursor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying> {

	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;

}

@property (nonatomic,copy) FCFeedRange * freeFeedRange;              //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy) FCFeedRange * paidFeedRange;              //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FCFeedRange *)freeFeedRange;
-(FCFeedRange *)paidFeedRange;
-(void)setFreeFeedRange:(FCFeedRange *)arg1 ;
-(void)setPaidFeedRange:(FCFeedRange *)arg1 ;
@end

