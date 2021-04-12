/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFPunchout.h>
@class NSString, NSArray, SFUserActivityData, NSDictionary, NSData;


@protocol SFPunchout <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * urls; 
@property (nonatomic,retain) SFUserActivityData * userActivityData; 
@property (nonatomic,copy) NSString * actionTarget; 
@property (assign,nonatomic) BOOL isRunnableInBackground; 
@property (assign,nonatomic) BOOL hasClip; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(void)setActionTarget:(id)arg1;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1;
-(void)setUserActivityData:(id)arg1;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setBundleIdentifier:(id)arg1;
-(SFUserActivityData *)userActivityData;
-(void)setName:(id)arg1;
-(void)setLabel:(id)arg1;
-(NSString *)actionTarget;
-(NSString *)label;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFUserActivityData, NSDictionary, NSData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	BOOL _isRunnableInBackground;
	BOOL _hasClip;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	SFUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                           //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) SFUserActivityData * userActivityData;                  //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                                  //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) BOOL isRunnableInBackground;                            //@synthesize isRunnableInBackground=_isRunnableInBackground - In the implementation block
@property (assign,nonatomic) BOOL hasClip;                                           //@synthesize hasClip=_hasClip - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)punchoutWithURL:(id)arg1 ;
+(id)punchoutWithURLs:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)urls;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
-(void)setActionTarget:(NSString *)arg1 ;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1 ;
-(void)setUserActivityData:(SFUserActivityData *)arg1 ;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(BOOL)hasIsRunnableInBackground;
-(BOOL)hasHasClip;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(SFUserActivityData *)userActivityData;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)actionTarget;
-(id)preferredOpenableURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

