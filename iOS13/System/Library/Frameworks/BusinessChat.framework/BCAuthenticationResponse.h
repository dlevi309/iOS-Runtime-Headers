/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>

@class NSString, NSArray, BCError, NSDictionary;

@interface BCAuthenticationResponse : NSObject <BCDictionaryImageSerializable> {

	NSString* _status;
	NSString* _token;
	NSArray* _errors;

}

@property (assign,nonatomic) NSString * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSArray * errors;                              //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BCError * error; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
-(NSString *)token;
-(id)initWithDictionary:(id)arg1 ;
-(BCError *)error;
-(NSString *)status;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setToken:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
@end

