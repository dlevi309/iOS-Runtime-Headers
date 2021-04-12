/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRetrieved : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _serviceError;

}

@property (nonatomic,retain) NSString * contentID;                 //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * serviceError;              //@synthesize serviceError=_serviceError - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 serviceError:(id)arg2 ;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
-(void)setDataProvider:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)context;
-(NSString *)contentID;
-(NSString *)serviceError;
-(void)setContentID:(NSString *)arg1 ;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
-(id)_initWithContentID:(id)arg1 serviceError:(id)arg2 ;
-(void)setServiceError:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)setContext:(NSString *)arg1 ;
@end

