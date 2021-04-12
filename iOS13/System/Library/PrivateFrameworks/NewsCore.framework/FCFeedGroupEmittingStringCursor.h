/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSString;

@interface FCFeedGroupEmittingStringCursor : FCFeedGroupEmittingCursor {

	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
@end

