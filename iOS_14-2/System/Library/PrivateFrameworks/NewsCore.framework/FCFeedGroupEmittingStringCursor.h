/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSString;

@interface FCFeedGroupEmittingStringCursor : FCFeedGroupEmittingCursor {

	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
@end

