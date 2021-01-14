/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARDNativeFlowContextUpdate, NSString;

@interface SARDResultCandidateSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARDNativeFlowContextUpdate * nativeFlowContextUpdate; 
@property (nonatomic,copy) NSString * selectedResultCandidateId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCandidateSelected;
+(id)resultCandidateSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SARDNativeFlowContextUpdate *)nativeFlowContextUpdate;
-(void)setNativeFlowContextUpdate:(SARDNativeFlowContextUpdate *)arg1 ;
-(NSString *)selectedResultCandidateId;
-(void)setSelectedResultCandidateId:(NSString *)arg1 ;
@end

