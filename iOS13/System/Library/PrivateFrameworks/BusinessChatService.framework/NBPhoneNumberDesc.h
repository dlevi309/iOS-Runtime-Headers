/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


#import <BusinessChatService/BusinessChatService-Structs.h>
@class NSString;

@interface NBPhoneNumberDesc : NSObject {

	NSString* _nationalNumberPattern;
	NSString* _possibleNumberPattern;
	NSString* _exampleNumber;

}

@property (nonatomic,retain) NSString * nationalNumberPattern;              //@synthesize nationalNumberPattern=_nationalNumberPattern - In the implementation block
@property (nonatomic,retain) NSString * possibleNumberPattern;              //@synthesize possibleNumberPattern=_possibleNumberPattern - In the implementation block
@property (nonatomic,retain) NSString * exampleNumber;                      //@synthesize exampleNumber=_exampleNumber - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithNationalNumberPattern:(id)arg1 withPossibleNumberPattern:(id)arg2 withExample:(id)arg3 ;
-(NSString *)nationalNumberPattern;
-(void)setNationalNumberPattern:(NSString *)arg1 ;
-(NSString *)possibleNumberPattern;
-(void)setPossibleNumberPattern:(NSString *)arg1 ;
-(NSString *)exampleNumber;
-(void)setExampleNumber:(NSString *)arg1 ;
@end

