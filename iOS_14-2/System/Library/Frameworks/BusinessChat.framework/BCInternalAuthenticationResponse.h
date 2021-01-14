/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>

@class NSString, NSArray, BCError, NSDictionary;

@interface BCInternalAuthenticationResponse : NSObject <BCDictionaryImageSerializable> {

	NSString* _status;
	NSString* _businessIdentifier;
	NSString* _groupIdentifier;
	NSString* _credentials;
	NSArray* _errors;

}

@property (assign,nonatomic) NSString * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * businessIdentifier;                 //@synthesize businessIdentifier=_businessIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                    //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * credentials;                        //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,retain) NSArray * errors;                              //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BCError * error; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(BCError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)credentials;
-(NSString *)businessIdentifier;
-(NSArray *)errors;
-(NSDictionary *)dictionaryValue;
-(void)setStatus:(NSString *)arg1 ;
-(void)setCredentials:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSString *)status;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4 ;
-(id)responseMessageFor:(id)arg1 message:(id)arg2 ;
@end

