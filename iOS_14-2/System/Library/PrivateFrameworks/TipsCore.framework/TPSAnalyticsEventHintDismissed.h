/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintDismissed : TPSAnalyticsEvent {

	double _timeToDismissal;
	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _dismissType;

}

@property (assign,nonatomic) double timeToDismissal;                //@synthesize timeToDismissal=_timeToDismissal - In the implementation block
@property (nonatomic,readonly) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * dismissType;              //@synthesize dismissType=_dismissType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6 ;
-(void)setDataProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)context;
-(NSString *)contentID;
-(NSString *)bundleID;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(double)arg5 date:(id)arg6 ;
-(double)timeToDismissal;
-(void)setTimeToDismissal:(double)arg1 ;
-(NSString *)dismissType;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

