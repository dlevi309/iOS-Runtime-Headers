/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintReadyToBeDisplayed : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _displayType;

}

@property (nonatomic,retain) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * displayType;              //@synthesize displayType=_displayType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 ;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 ;
-(void)setDataProvider:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)displayType;
-(id)_initWithContentID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setDisplayType:(NSString *)arg1 ;
-(NSString *)context;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)setContext:(NSString *)arg1 ;
@end

