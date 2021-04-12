/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPCollection.h>

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSArray * preferredPlayOrder; 
@property (nonatomic,copy) NSString * sortArtist; 
@property (nonatomic,copy) NSNumber * subscribed; 
+(id)podcastCollection;
+(id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSArray *)preferredPlayOrder;
-(void)setPreferredPlayOrder:(NSArray *)arg1 ;
-(NSNumber *)subscribed;
@end

