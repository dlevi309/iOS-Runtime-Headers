/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSMutableSet, UIImage, NSString, NSURL, CNContact, NSDate, NSUUID, NSNumber, NSSet;

@interface WBSForYouLinkRecommendation : NSObject {

	NSMutableSet* _originalQueries;
	UIImage* _appIcon;
	NSString* _title;
	NSString* _footnote;
	NSURL* _pageURL;
	NSString* _simplifiedURLString;
	NSURL* _imageURL;
	UIImage* _image;
	CNContact* _contact;
	UIImage* _contactImage;
	NSDate* _lastSeenDate;
	id _sourceID;
	NSString* _bundleIdentifier;
	NSString* _secondarySourceIdentifier;
	unsigned long long _source;
	unsigned long long _topicSource;
	NSUUID* _uniqueIdentifier;
	NSNumber* _cachedScore;

}

@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                    //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalQueriesString; 
@property (nonatomic,copy,readonly) NSSet * originalQueries; 
@property (nonatomic,readonly) NSURL * pageURL;                                    //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * simplifiedURLString;                //@synthesize simplifiedURLString=_simplifiedURLString - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) UIImage * contactImage;                               //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,readonly) UIImage * appIcon; 
@property (nonatomic,readonly) UIImage * sourceIcon; 
@property (nonatomic,readonly) NSDate * lastSeenDate;                              //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (nonatomic,retain) id sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * badgeBundleIdentifier; 
@property (nonatomic,copy) NSString * secondarySourceIdentifier;                   //@synthesize secondarySourceIdentifier=_secondarySourceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                          //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long topicSource;                       //@synthesize topicSource=_topicSource - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * cachedScore;                               //@synthesize cachedScore=_cachedScore - In the implementation block
-(void)setSourceID:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSURL *)pageURL;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)uniqueIdentifier;
-(UIImage *)image;
-(void)setFootnote:(NSString *)arg1 ;
-(NSDate *)lastSeenDate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setContactImage:(UIImage *)arg1 ;
-(id)sourceID;
-(NSURL *)imageURL;
-(UIImage *)contactImage;
-(UIImage *)sourceIcon;
-(UIImage *)appIcon;
-(NSString *)title;
-(unsigned long long)source;
-(id)initWithTitle:(id)arg1 url:(id)arg2 lastSeenDate:(id)arg3 source:(unsigned long long)arg4 topicSource:(unsigned long long)arg5 ;
-(void)addOriginalQueries:(id)arg1 ;
-(NSString *)badgeBundleIdentifier;
-(NSSet *)originalQueries;
-(NSString *)originalQueriesString;
-(NSString *)simplifiedURLString;
-(NSString *)secondarySourceIdentifier;
-(void)setSecondarySourceIdentifier:(NSString *)arg1 ;
-(unsigned long long)topicSource;
-(void)setTopicSource:(unsigned long long)arg1 ;
-(NSNumber *)cachedScore;
-(void)setCachedScore:(NSNumber *)arg1 ;
@end

