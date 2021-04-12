/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAssetInfo:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteUID;
-(BOOL)requiresResponse;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(SAMPPodcastCollection *)podcastCollection;
-(void)setPodcastCollection:(SAMPPodcastCollection *)arg1 ;
@end

