/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(NSString *)artist;
-(id)encodedClassName;
-(NSString *)description;
-(NSString *)sortArtist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setSortArtist:(NSString *)arg1 ;
@end

