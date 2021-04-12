/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)albumCollection;
+(id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(id)groupIdentifier;
-(NSString *)artist;
-(void)setDescription:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end

