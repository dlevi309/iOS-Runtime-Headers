/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appPunchOutEvent;
+(id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)bundleId;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
@end

