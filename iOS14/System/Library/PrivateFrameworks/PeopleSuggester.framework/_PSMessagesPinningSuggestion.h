/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _PSMessagesPinningSuggestion : NSObject <NSSecureCoding> {

	NSString* _chatGuid;

}

@property (nonatomic,readonly) NSString * chatGuid;              //@synthesize chatGuid=_chatGuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithChatGuid:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)chatGuid;
-(BOOL)isEqual:(id)arg1 ;
@end

