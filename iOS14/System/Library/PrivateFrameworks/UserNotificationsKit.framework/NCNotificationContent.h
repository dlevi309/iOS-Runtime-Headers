/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, UIImage, NSDate, NSTimeZone;

@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSString* _header;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _categorySummaryFormat;
	NSString* _summaryArgument;
	unsigned long long _summaryArgumentCount;
	NSArray* _icons;
	NSArray* _carPlayIcons;
	UIImage* _attachmentImage;
	NSDate* _date;
	BOOL _dateAllDay;
	NSTimeZone* _timeZone;
	NSString* _topic;

}

@property (nonatomic,copy,readonly) NSString * header;                                     //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPreviewsBodyPlaceholder;              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * categorySummaryFormat;                      //@synthesize categorySummaryFormat=_categorySummaryFormat - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryArgument;                            //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryArgumentCount;                    //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;                                      //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) NSArray * icons;                                            //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) UIImage * carPlayIcon; 
@property (nonatomic,readonly) NSArray * carPlayIcons;                                     //@synthesize carPlayIcons=_carPlayIcons - In the implementation block
@property (nonatomic,readonly) UIImage * attachmentImage;                                  //@synthesize attachmentImage=_attachmentImage - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay;                        //@synthesize dateAllDay=_dateAllDay - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(id)succinctDescription;
-(unsigned long long)summaryArgumentCount;
-(NSTimeZone *)timeZone;
-(NSString *)summaryArgument;
-(NSString *)message;
-(NSString *)topic;
-(NSArray *)icons;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)header;
-(UIImage *)icon;
-(NSString *)subtitle;
-(NSString *)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)categorySummaryFormat;
-(NSString *)description;
-(unsigned long long)hash;
-(NSDate *)date;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDateAllDay;
-(UIImage *)attachmentImage;
-(NSArray *)carPlayIcons;
-(id)initWithNotificationContent:(id)arg1 ;
-(UIImage *)carPlayIcon;
@end

