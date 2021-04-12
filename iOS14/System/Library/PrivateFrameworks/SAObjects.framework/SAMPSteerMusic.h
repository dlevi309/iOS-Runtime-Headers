/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SAMPCollection *)currentListeningToCollection;
-(void)setCurrentListeningToCollection:(SAMPCollection *)arg1 ;
-(SAMPMediaItem *)currentListeningToItem;
-(void)setCurrentListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSString *)steerableBlob;
-(void)setSteerableBlob:(NSString *)arg1 ;
@end

