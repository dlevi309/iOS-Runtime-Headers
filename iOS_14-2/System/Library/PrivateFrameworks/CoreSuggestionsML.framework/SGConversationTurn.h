/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGConversationTurnProtocol.h>

@class NSString, NSDate;

@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol> {

	NSString* _text;
	NSString* _senderID;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)senderID;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToConversationTurn:(id)arg1 ;
-(id)initWithText:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
@end

