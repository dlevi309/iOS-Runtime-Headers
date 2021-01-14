/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, TPSExperiment;

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	unsigned long long _displayType;
	unsigned long long _displayCount;
	TPSExperiment* _experiment;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) unsigned long long displayCount;               //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,readonly) TPSExperiment * experiment;                  //@synthesize experiment=_experiment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6 ;
-(void)setDataProvider:(id)arg1 ;
-(unsigned long long)displayType;
-(TPSExperiment *)experiment;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)context;
-(NSString *)contentID;
-(void)setDisplayCount:(unsigned long long)arg1 ;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6 ;
-(id)duetEvent;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)displayCount;
-(id)mutableAnalyticsEventRepresentation;
@end

