/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	unsigned long long _displayType;
	long long _reason;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) long long reason;                            //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6 ;
-(unsigned long long)displayType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)context;
-(NSString *)contentID;
-(id)duetEvent;
-(long long)reason;
-(NSString *)bundleID;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

