/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(BCError *)error;
-(NSString *)status;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setCredentials:(NSString *)arg1 ;
-(NSString *)credentials;
-(void)setErrors:(NSArray *)arg1 ;
-(NSString *)businessIdentifier;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4 ;
-(id)responseMessageFor:(id)arg1 message:(id)arg2 ;
@end

