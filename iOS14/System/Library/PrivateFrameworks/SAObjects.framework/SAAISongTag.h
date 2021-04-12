/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)songTagWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)songTag;
-(id)groupIdentifier;
-(NSString *)artist;
-(id)encodedClassName;
-(NSString *)albumAdamId;
-(void)setAlbumAdamId:(NSString *)arg1 ;
-(NSString *)artistAdamId;
-(void)setArtistAdamId:(NSString *)arg1 ;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSURL *)radioStationUri;
-(void)setRadioStationUri:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(void)setPreviewImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)previewImage;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(NSString *)title;
@end

