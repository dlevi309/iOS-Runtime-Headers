/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTLoggingRequest.h>

@class NSString, NSArray;

@interface _LTTranslationSensesLoggingRequest : NSObject <_LTLoggingRequest> {

	NSString* _conversationID;
	NSString* _requestID;
	NSArray* _senses;
	NSArray* _userInteractedSenses;

}

@property (nonatomic,copy) NSString * conversationID;                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSArray * senses;                            //@synthesize senses=_senses - In the implementation block
@property (nonatomic,copy) NSArray * userInteractedSenses;              //@synthesize userInteractedSenses=_userInteractedSenses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)senses;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(NSString *)requestID;
-(NSArray *)userInteractedSenses;
-(void)setUserInteractedSenses:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setSenses:(NSArray *)arg1 ;
@end

