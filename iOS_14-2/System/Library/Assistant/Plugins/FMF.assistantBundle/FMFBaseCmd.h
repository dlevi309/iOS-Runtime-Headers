/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMCore/FMJSONCommand.h>

@class NSNumber, NSURL;

@interface FMFBaseCmd : FMJSONCommand {

	NSNumber* statusCode;
	NSURL* contextIdentifierURL;

}

@property (nonatomic,copy) NSNumber * statusCode; 
@property (nonatomic,copy) NSURL * contextIdentifierURL; 
-(id)init;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(NSNumber *)statusCode;
-(id)result;
-(id)headers;
-(id)jsonBodyDictionary;
-(id)jsonResponseDictionary;
-(NSURL *)contextIdentifierURL;
-(void)setContextIdentifierURL:(NSURL *)arg1 ;
-(id)staticClientContext;
-(double)minCallbackInterval;
@end

