/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPCollection.h>

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSArray * preferredPlayOrder; 
@property (nonatomic,copy) NSString * sortArtist; 
@property (nonatomic,copy) NSNumber * subscribed; 
+(id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)podcastCollection;
-(id)groupIdentifier;
-(NSString *)artist;
-(id)encodedClassName;
-(NSArray *)preferredPlayOrder;
-(void)setPreferredPlayOrder:(NSArray *)arg1 ;
-(NSNumber *)subscribed;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(NSString *)sortArtist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setSortArtist:(NSString *)arg1 ;
@end

