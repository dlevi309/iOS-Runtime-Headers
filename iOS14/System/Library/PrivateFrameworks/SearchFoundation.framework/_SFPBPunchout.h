/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPunchout.h>
@class NSString, NSArray, _SFPBUserActivityData, NSData;


@protocol _SFPBPunchout <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * urls; 
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData; 
@property (nonatomic,copy) NSString * actionTarget; 
@property (assign,nonatomic) BOOL isRunnableInBackground; 
@property (assign,nonatomic) BOOL hasClip; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(unsigned long long)urlsCount;
-(void)setActionTarget:(id)arg1;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1;
-(void)setUserActivityData:(id)arg1;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1;
-(NSString *)name;
-(id)urlsAtIndex:(unsigned long long)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(_SFPBUserActivityData *)userActivityData;
-(void)addUrls:(id)arg1;
-(void)setName:(id)arg1;
-(void)clearUrls;
-(void)setLabel:(id)arg1;
-(NSString *)actionTarget;
-(NSString *)label;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _SFPBUserActivityData, NSData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding> {

	BOOL _isRunnableInBackground;
	BOOL _hasClip;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	_SFPBUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                          //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData;              //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                                 //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) BOOL isRunnableInBackground;                           //@synthesize isRunnableInBackground=_isRunnableInBackground - In the implementation block
@property (assign,nonatomic) BOOL hasClip;                                          //@synthesize hasClip=_hasClip - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(unsigned long long)urlsCount;
-(void)setActionTarget:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1 ;
-(void)setUserActivityData:(_SFPBUserActivityData *)arg1 ;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1 ;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)urlsAtIndex:(unsigned long long)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(_SFPBUserActivityData *)userActivityData;
-(unsigned long long)hash;
-(void)addUrls:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)clearUrls;
-(void)setLabel:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)actionTarget;
-(NSString *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

