/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASGetMultilingualDictationConfig : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSNumber * multilingualTimeoutInMillis; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getMultilingualDictationConfig;
+(id)getMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)multilingualDisabled;
-(void)setMultilingualDisabled:(BOOL)arg1 ;
-(NSNumber *)multilingualTimeoutInMillis;
-(void)setMultilingualTimeoutInMillis:(NSNumber *)arg1 ;
@end

