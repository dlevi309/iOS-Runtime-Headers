/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SACalendar, SAMPPlaybackInfo;

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic,copy) NSString * adamIdentifier; 
@property (nonatomic,copy) NSString * brandIdentifier; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (assign,nonatomic) BOOL explicit; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * mediaType; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,copy) NSString * rawPlaybackInfo; 
@property (nonatomic,copy) NSString * releaseDate; 
@property (nonatomic,copy) NSString * sortTitle; 
@property (nonatomic,copy) NSString * storeId; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL unplayable; 
+(id)mediaEntity;
+(id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)storeId;
-(NSString *)mediaType;
-(id)encodedClassName;
-(NSString *)sortTitle;
-(NSString *)brandIdentifier;
-(void)setBrandIdentifier:(NSString *)arg1 ;
-(void)setPlaybackInfo:(SAMPPlaybackInfo *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)adamIdentifier;
-(NSString *)externalIdentifier;
-(void)setSortTitle:(NSString *)arg1 ;
-(void)setAdamIdentifier:(NSString *)arg1 ;
-(void)setStoreId:(NSString *)arg1 ;
-(void)setDateAdded:(SACalendar *)arg1 ;
-(SAMPPlaybackInfo *)playbackInfo;
-(BOOL)explicit;
-(void)setExplicit:(BOOL)arg1 ;
-(NSString *)rawPlaybackInfo;
-(void)setRawPlaybackInfo:(NSString *)arg1 ;
-(BOOL)unplayable;
-(void)setUnplayable:(BOOL)arg1 ;
-(SACalendar *)dateAdded;
-(NSString *)title;
@end

