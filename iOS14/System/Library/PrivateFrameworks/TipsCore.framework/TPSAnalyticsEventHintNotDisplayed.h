/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintNotDisplayed : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _displayType;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDataProvider:(id)arg1 ;
-(NSString *)displayType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)context;
-(NSString *)contentID;
-(id)duetEvent;
-(id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 ;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 reason:(long long)arg3 context:(id)arg4 date:(id)arg5 ;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 reason:(id)arg5 date:(id)arg6 ;
-(id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 date:(id)arg5 ;
-(id)initWithContentID:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

