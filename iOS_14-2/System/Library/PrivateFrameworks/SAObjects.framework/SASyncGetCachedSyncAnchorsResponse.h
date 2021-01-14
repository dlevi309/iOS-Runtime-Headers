/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASyncGetCachedSyncAnchorsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * anchors; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCachedSyncAnchorsResponse;
+(id)getCachedSyncAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)anchors;
-(void)setAnchors:(NSArray *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end

