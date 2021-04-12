/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, NSArray, EDAMContact;

@interface EDAMRelatedContent : FATObject {

	NSString* _contentId;
	NSString* _title;
	NSString* _url;
	NSString* _sourceId;
	NSString* _sourceUrl;
	NSString* _sourceFaviconUrl;
	NSString* _sourceName;
	NSNumber* _date;
	NSString* _teaser;
	NSArray* _thumbnails;
	NSNumber* _contentType;
	NSNumber* _accessType;
	NSString* _visibleUrl;
	NSString* _clipUrl;
	EDAMContact* _contact;
	NSArray* _authors;

}

@property (nonatomic,retain) NSString * contentId;                     //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * sourceId;                      //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,retain) NSString * sourceUrl;                     //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSString * sourceFaviconUrl;              //@synthesize sourceFaviconUrl=_sourceFaviconUrl - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                    //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) NSNumber * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * teaser;                        //@synthesize teaser=_teaser - In the implementation block
@property (nonatomic,retain) NSArray * thumbnails;                     //@synthesize thumbnails=_thumbnails - In the implementation block
@property (nonatomic,retain) NSNumber * contentType;                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSNumber * accessType;                    //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,retain) NSString * visibleUrl;                    //@synthesize visibleUrl=_visibleUrl - In the implementation block
@property (nonatomic,retain) NSString * clipUrl;                       //@synthesize clipUrl=_clipUrl - In the implementation block
@property (nonatomic,retain) EDAMContact * contact;                    //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSArray * authors;                        //@synthesize authors=_authors - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)contentId;
-(EDAMContact *)contact;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)sourceId;
-(void)setContact:(EDAMContact *)arg1 ;
-(NSNumber *)contentType;
-(NSArray *)thumbnails;
-(NSArray *)authors;
-(void)setTitle:(NSString *)arg1 ;
-(void)setThumbnails:(NSArray *)arg1 ;
-(void)setDate:(NSNumber *)arg1 ;
-(NSString *)url;
-(void)setAccessType:(NSNumber *)arg1 ;
-(NSString *)sourceUrl;
-(void)setSourceUrl:(NSString *)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)teaser;
-(void)setUrl:(NSString *)arg1 ;
-(void)setContentType:(NSNumber *)arg1 ;
-(NSNumber *)date;
-(NSString *)clipUrl;
-(void)setAuthors:(NSArray *)arg1 ;
-(NSNumber *)accessType;
-(NSString *)sourceName;
-(NSString *)title;
-(void)setSourceId:(NSString *)arg1 ;
-(NSString *)sourceFaviconUrl;
-(void)setSourceFaviconUrl:(NSString *)arg1 ;
-(void)setTeaser:(NSString *)arg1 ;
-(NSString *)visibleUrl;
-(void)setVisibleUrl:(NSString *)arg1 ;
-(void)setClipUrl:(NSString *)arg1 ;
@end

