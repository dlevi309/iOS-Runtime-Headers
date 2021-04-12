/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SGConversationTurnProtocol.h>

@class NSString, NSDate, SGTextMessage, NSArray;

@interface SGTextMessageItem : NSObject <NSSecureCoding, SGConversationTurnProtocol> {

	SGTextMessage* _message;
	NSString* _text;
	NSString* _senderID;
	NSDate* _timestamp;
	NSString* _language;
	NSArray* _detectedData;
	NSArray* _features;

}

@property (readonly) SGTextMessage * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSString * language;                        //@synthesize language=_language - In the implementation block
@property (readonly) NSArray * detectedData;                     //@synthesize detectedData=_detectedData - In the implementation block
@property (retain) NSArray * features;                           //@synthesize features=_features - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGTextMessage *)message;
-(NSString *)senderID;
-(NSArray *)features;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)initWithTextMessage:(id)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(BOOL)isEqualToConversationTurn:(id)arg1 ;
-(id)initWithTextMessage:(id)arg1 detectedData:(id)arg2 ;
-(NSArray *)detectedData;
@end

