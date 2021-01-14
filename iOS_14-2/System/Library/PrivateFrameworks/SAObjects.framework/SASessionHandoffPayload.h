/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAHandoffPayload.h>

@class NSData, NSString;

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>

@property (nonatomic,copy) NSData * sessionHandoffData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionHandoffPayload;
+(id)sessionHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)sessionHandoffData;
-(void)setSessionHandoffData:(NSData *)arg1 ;
-(id)encodedClassName;
@end

