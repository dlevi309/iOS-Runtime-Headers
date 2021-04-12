/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * albumAdamId; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * artistAdamId; 
@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (nonatomic,retain) SAUIImageResource * previewImage; 
@property (nonatomic,copy) NSURL * radioStationUri; 
@property (nonatomic,copy) NSString * title; 
+(id)songTag;
+(id)songTagWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(SAUIImageResource *)previewImage;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(void)setPreviewImage:(SAUIImageResource *)arg1 ;
-(NSString *)albumAdamId;
-(void)setAlbumAdamId:(NSString *)arg1 ;
-(NSString *)artistAdamId;
-(void)setArtistAdamId:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSURL *)radioStationUri;
-(void)setRadioStationUri:(NSURL *)arg1 ;
@end

