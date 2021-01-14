/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recipientSearchCompleted;
+(id)recipientSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)recipients;
-(id)groupIdentifier;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

