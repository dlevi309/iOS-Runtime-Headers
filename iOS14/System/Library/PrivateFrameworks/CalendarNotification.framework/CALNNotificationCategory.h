/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying> {

	NSString* _identifier;
	NSArray* _actions;
	unsigned long long _options;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _categorySummaryFormat;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPreviewsBodyPlaceholder;              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * categorySummaryFormat;                      //@synthesize categorySummaryFormat=_categorySummaryFormat - In the implementation block
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 ;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(NSArray *)actions;
-(unsigned long long)options;
-(NSString *)categorySummaryFormat;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqualToCategory:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

