/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSArray, NSNumber, NSDate, WFTimeInterval, NSURL, NSDictionary;

@interface WFPodcastEpisodeObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {

	NSString* _identifier;
	NSString* _title;
	NSString* _author;
	NSString* _descriptionText;
	NSArray* _genres;
	NSNumber* _episodeNumber;
	NSDate* _releaseDate;
	WFTimeInterval* _duration;
	NSURL* _viewURL;
	NSURL* _feedURL;
	NSString* _artworkURLTemplate;

}

@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * author;                                //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSArray * genres;                                 //@synthesize genres=_genres - In the implementation block
@property (nonatomic,readonly) NSNumber * episodeNumber;                         //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSURL * viewURL;                                  //@synthesize viewURL=_viewURL - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                                  //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSString * artworkURLTemplate;                    //@synthesize artworkURLTemplate=_artworkURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)releaseDateJSONTransformer;
+(id)descriptionTextJSONTransformer;
+(id)durationJSONTransformer;
-(NSNumber *)episodeNumber;
-(NSDate *)releaseDate;
-(NSString *)author;
-(NSString *)descriptionText;
-(NSArray *)genres;
-(NSString *)wfName;
-(NSURL *)feedURL;
-(NSURL *)viewURL;
-(NSString *)identifier;
-(WFTimeInterval *)duration;
-(NSString *)title;
-(NSString *)artworkURLTemplate;
@end

