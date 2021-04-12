/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitUI.framework/ReminderKitUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDateComponents, CLLocation, NSString, NSURL, NSData, NSUserActivity;

@interface REMReminderCreationContext : NSObject <NSSecureCoding> {

	BOOL _wantsExtendedDetailOnlyView;
	BOOL _titleIsGeneratedSuggestion;
	NSAttributedString* _title;
	NSAttributedString* _notes;
	NSDateComponents* _dueDateComponents;
	CLLocation* _location;
	NSString* _locationString;
	long long _locationProximity;
	NSURL* _url;
	NSData* _siriFoundInAppsData;
	NSUserActivity* _userActivity;

}

@property (nonatomic,copy) NSAttributedString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * notes;                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,copy) CLLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationString;                         //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) long long locationProximity;                     //@synthesize locationProximity=_locationProximity - In the implementation block
@property (nonatomic,copy) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSData * siriFoundInAppsData;                      //@synthesize siriFoundInAppsData=_siriFoundInAppsData - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivity;                   //@synthesize userActivity=_userActivity - In the implementation block
@property (assign,nonatomic) BOOL wantsExtendedDetailOnlyView;                //@synthesize wantsExtendedDetailOnlyView=_wantsExtendedDetailOnlyView - In the implementation block
@property (assign,nonatomic) BOOL titleIsGeneratedSuggestion;                 //@synthesize titleIsGeneratedSuggestion=_titleIsGeneratedSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSAttributedString *)title;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(CLLocation *)location;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(NSAttributedString *)notes;
-(void)setNotes:(NSAttributedString *)arg1 ;
-(BOOL)wantsExtendedDetailOnlyView;
-(BOOL)titleIsGeneratedSuggestion;
-(long long)locationProximity;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(NSData *)siriFoundInAppsData;
-(void)setSiriFoundInAppsData:(NSData *)arg1 ;
-(void)setWantsExtendedDetailOnlyView:(BOOL)arg1 ;
-(void)setTitleIsGeneratedSuggestion:(BOOL)arg1 ;
-(void)setLocationProximity:(long long)arg1 ;
@end

