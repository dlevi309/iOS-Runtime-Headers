/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientStateServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>

@property (nonatomic,copy) NSArray * restrictions; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setRestrictions;
+(id)setRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)restrictions;
-(void)setRestrictions:(NSArray *)arg1 ;
@end

