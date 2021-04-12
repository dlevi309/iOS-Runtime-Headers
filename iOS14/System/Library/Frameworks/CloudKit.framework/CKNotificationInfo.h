/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldBadge;
	BOOL _shouldSendContentAvailable;
	BOOL _shouldSendMutableContent;
	NSString* _alertBody;
	NSString* _alertLocalizationKey;
	NSArray* _alertLocalizationArgs;
	NSString* _title;
	NSString* _titleLocalizationKey;
	NSArray* _titleLocalizationArgs;
	NSString* _subtitle;
	NSString* _subtitleLocalizationKey;
	NSArray* _subtitleLocalizationArgs;
	NSString* _alertActionLocalizationKey;
	NSString* _alertLaunchImage;
	NSString* _soundName;
	NSArray* _desiredKeys;
	NSString* _category;
	NSString* _collapseIDKey;

}

@property (nonatomic,copy) NSString * alertBody;                               //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,copy) NSString * alertLocalizationKey;                    //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * alertLocalizationArgs;                    //@synthesize alertLocalizationArgs=_alertLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                    //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArgs;                    //@synthesize titleLocalizationArgs=_titleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalizationKey;                 //@synthesize subtitleLocalizationKey=_subtitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * subtitleLocalizationArgs;                 //@synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * alertActionLocalizationKey;              //@synthesize alertActionLocalizationKey=_alertActionLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * alertLaunchImage;                        //@synthesize alertLaunchImage=_alertLaunchImage - In the implementation block
@property (nonatomic,copy) NSString * soundName;                               //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                                 //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldSendContentAvailable;                  //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
@property (assign,nonatomic) BOOL shouldSendMutableContent;                    //@synthesize shouldSendMutableContent=_shouldSendMutableContent - In the implementation block
@property (nonatomic,copy) NSString * category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * collapseIDKey;                           //@synthesize collapseIDKey=_collapseIDKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationInfo;
-(NSString *)soundName;
-(NSString *)collapseIDKey;
-(void)setSoundName:(NSString *)arg1 ;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(NSString *)titleLocalizationKey;
-(void)_setAlertLocalizationArgsNoValidate:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)alertBody;
-(void)_setSubtitleLocalizationKeyNoValidate:(id)arg1 ;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(void)_setSubtitleLocalizationArgsNoValidate:(id)arg1 ;
-(void)_setAlertBodyNoValidate:(id)arg1 ;
-(BOOL)shouldSendContentAvailable;
-(BOOL)shouldSendMutableContent;
-(void)_setShouldSendMutableContentNoValidate:(BOOL)arg1 ;
-(void)_setSoundNameNoValidate:(id)arg1 ;
-(NSString *)subtitle;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)category;
-(NSString *)subtitleLocalizationKey;
-(void)_setCategoryNoValidate:(id)arg1 ;
-(void)_setShouldBadgeNoValidate:(BOOL)arg1 ;
-(void)setShouldSendMutableContent:(BOOL)arg1 ;
-(void)setAlertBody:(NSString *)arg1 ;
-(void)setSubtitleLocalizationKey:(NSString *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)_setTitleLocalizationKeyNoValidate:(id)arg1 ;
-(void)setTitleLocalizationArgs:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setAlertActionLocalizationKey:(NSString *)arg1 ;
-(void)setAlertLaunchImage:(NSString *)arg1 ;
-(void)setAlertLocalizationArgs:(NSArray *)arg1 ;
-(NSString *)alertLaunchImage;
-(void)_setTitleNoValidate:(id)arg1 ;
-(void)setCollapseIDKey:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)alertLocalizationKey;
-(void)_setSubtitleNoValidate:(id)arg1 ;
-(NSArray *)titleLocalizationArgs;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_setAlertLocalizationKeyNoValidate:(id)arg1 ;
-(void)setSubtitleLocalizationArgs:(NSArray *)arg1 ;
-(NSArray *)alertLocalizationArgs;
-(void)_setTitleLocalizationArgsNoValidate:(id)arg1 ;
-(BOOL)shouldBadge;
-(void)_setShouldSendContentAvailableNoValidate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setAlertLaunchImageNoValidate:(id)arg1 ;
-(NSArray *)subtitleLocalizationArgs;
-(void)_setAlertActionLocalizationKeyNoValidate:(id)arg1 ;
-(NSString *)alertActionLocalizationKey;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

