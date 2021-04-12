/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPCollection, SAMPMediaItem, NSArray, NSString;

@interface SAMPSteerMusic : SADomainCommand

@property (nonatomic,retain) SAMPCollection * currentListeningToCollection; 
@property (nonatomic,retain) SAMPMediaItem * currentListeningToItem; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * steerableBlob; 
+(id)steerMusic;
+(id)steerMusicWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMPCollection *)currentListeningToCollection;
-(void)setCurrentListeningToCollection:(SAMPCollection *)arg1 ;
-(SAMPMediaItem *)currentListeningToItem;
-(void)setCurrentListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSString *)steerableBlob;
-(void)setSteerableBlob:(NSString *)arg1 ;
@end

