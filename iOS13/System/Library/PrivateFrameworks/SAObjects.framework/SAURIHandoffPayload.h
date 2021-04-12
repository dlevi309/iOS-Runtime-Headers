/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)encodedClassName;
@end

