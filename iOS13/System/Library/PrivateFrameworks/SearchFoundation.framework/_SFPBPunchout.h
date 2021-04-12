/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(id)arg1;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(_SFPBUserActivityData *)userActivityData;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(NSString *)actionTarget;
-(NSData *)jsonData;
-(void)setUserActivityData:(id)arg1;
-(void)setActionTarget:(id)arg1;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addUrls:(id)arg1;
-(id)urlsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _SFPBUserActivityData, NSData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding> {

	BOOL _isRunnableInBackground;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	_SFPBUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                          //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData;              //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                                 //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) BOOL isRunnableInBackground;                           //@synthesize isRunnableInBackground=_isRunnableInBackground - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBUserActivityData *)userActivityData;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(NSString *)actionTarget;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setUserActivityData:(_SFPBUserActivityData *)arg1 ;
-(void)setActionTarget:(NSString *)arg1 ;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addUrls:(id)arg1 ;
-(id)urlsAtIndex:(unsigned long long)arg1 ;
@end

