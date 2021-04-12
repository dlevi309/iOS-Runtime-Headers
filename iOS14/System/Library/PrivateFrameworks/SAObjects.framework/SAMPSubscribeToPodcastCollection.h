/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (nonatomic,retain) SAMPPodcastCollection * podcastCollection; 
+(id)subscribeToPodcastCollection;
+(id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(NSString *)hashedRouteUID;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAssetInfo:(NSString *)arg1 ;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(SAMPPodcastCollection *)podcastCollection;
-(void)setPodcastCollection:(SAMPPodcastCollection *)arg1 ;
@end

