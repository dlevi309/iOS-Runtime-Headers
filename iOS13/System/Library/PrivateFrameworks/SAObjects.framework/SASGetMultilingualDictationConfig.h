/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASGetMultilingualDictationConfig : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSNumber * multilingualTimeoutInMillis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
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

