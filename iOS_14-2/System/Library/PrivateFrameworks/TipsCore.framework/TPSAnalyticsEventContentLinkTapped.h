/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent {

	NSString* _contentID;

}

@property (nonatomic,readonly) NSString * contentID;              //@synthesize contentID=_contentID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 ;
-(id)_initWithContentID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

