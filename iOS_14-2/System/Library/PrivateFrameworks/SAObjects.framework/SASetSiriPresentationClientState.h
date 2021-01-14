/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SASetSingleClientState.h>

@class SASiriPresentationClientState, NSString;

@interface SASetSiriPresentationClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic,retain) SASiriPresentationClientState * clientState; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setSiriPresentationClientState;
+(id)setSiriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setClientState:(SASiriPresentationClientState *)arg1 ;
-(SASiriPresentationClientState *)clientState;
@end

