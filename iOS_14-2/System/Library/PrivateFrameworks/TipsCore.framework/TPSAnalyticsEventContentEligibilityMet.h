/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSArray;

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSArray* _eligibleContext;
	unsigned long long _displayType;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSArray * eligibleContext;                   //@synthesize eligibleContext=_eligibleContext - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5 ;
-(unsigned long long)displayType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(id)duetEvent;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)eligibleContext;
-(id)mutableAnalyticsEventRepresentation;
@end

