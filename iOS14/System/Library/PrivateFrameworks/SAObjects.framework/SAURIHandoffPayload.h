/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAHandoffPayload.h>

@class NSURL, NSString;

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>

@property (nonatomic,copy) NSURL * link; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uRIHandoffPayload;
+(id)uRIHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

