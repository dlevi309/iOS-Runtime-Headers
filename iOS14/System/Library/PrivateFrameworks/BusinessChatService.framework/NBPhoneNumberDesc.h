/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSString, NSArray, NSData;

@interface NBPhoneNumberDesc : NSObject {

	NSString* _nationalNumberPattern;
	NSString* _possibleNumberPattern;
	NSArray* _possibleLength;
	NSArray* _possibleLengthLocalOnly;
	NSString* _exampleNumber;
	NSData* _nationalNumberMatcherData;
	NSData* _possibleNumberMatcherData;

}

@property (nonatomic,readonly) NSString * nationalNumberPattern;                //@synthesize nationalNumberPattern=_nationalNumberPattern - In the implementation block
@property (nonatomic,readonly) NSString * possibleNumberPattern;                //@synthesize possibleNumberPattern=_possibleNumberPattern - In the implementation block
@property (nonatomic,readonly) NSArray * possibleLength;                        //@synthesize possibleLength=_possibleLength - In the implementation block
@property (nonatomic,readonly) NSArray * possibleLengthLocalOnly;               //@synthesize possibleLengthLocalOnly=_possibleLengthLocalOnly - In the implementation block
@property (nonatomic,readonly) NSString * exampleNumber;                        //@synthesize exampleNumber=_exampleNumber - In the implementation block
@property (nonatomic,readonly) NSData * nationalNumberMatcherData;              //@synthesize nationalNumberMatcherData=_nationalNumberMatcherData - In the implementation block
@property (nonatomic,readonly) NSData * possibleNumberMatcherData;              //@synthesize possibleNumberMatcherData=_possibleNumberMatcherData - In the implementation block
-(id)initWithEntry:(id)arg1 ;
-(id)description;
-(NSString *)nationalNumberPattern;
-(NSString *)possibleNumberPattern;
-(NSArray *)possibleLength;
-(NSArray *)possibleLengthLocalOnly;
-(NSString *)exampleNumber;
-(NSData *)nationalNumberMatcherData;
-(NSData *)possibleNumberMatcherData;
@end

