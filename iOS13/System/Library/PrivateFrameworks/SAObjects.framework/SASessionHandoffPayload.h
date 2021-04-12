/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)encodedClassName;
-(NSData *)sessionHandoffData;
-(void)setSessionHandoffData:(NSData *)arg1 ;
@end

