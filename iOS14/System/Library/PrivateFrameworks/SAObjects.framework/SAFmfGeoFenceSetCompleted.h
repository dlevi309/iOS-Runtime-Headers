/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAFmfGeoFence, NSURL, NSString;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAFmfGeoFence * geoFence; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)geoFenceSetCompleted;
+(id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(SAFmfGeoFence *)geoFence;
-(void)setGeoFence:(SAFmfGeoFence *)arg1 ;
@end

