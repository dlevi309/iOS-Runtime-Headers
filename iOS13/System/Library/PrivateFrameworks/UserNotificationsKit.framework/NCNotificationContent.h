/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(NSString *)message;
-(NSString *)subtitle;
-(NSString *)topic;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)header;
-(UIImage *)icon;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(NSString *)categorySummaryFormat;
-(BOOL)isDateAllDay;
-(NSArray *)carPlayIcons;
-(UIImage *)attachmentImage;
-(id)initWithNotificationContent:(id)arg1 ;
-(UIImage *)carPlayIcon;
@end

