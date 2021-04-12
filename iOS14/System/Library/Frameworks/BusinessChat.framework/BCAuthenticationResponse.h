/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
-(BCError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(NSArray *)errors;
-(NSDictionary *)dictionaryValue;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)token;
-(void)setErrors:(NSArray *)arg1 ;
-(NSString *)status;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
@end

