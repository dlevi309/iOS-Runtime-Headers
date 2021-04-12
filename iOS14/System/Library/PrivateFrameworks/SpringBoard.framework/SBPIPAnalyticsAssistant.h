/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBPIPAnalyticsAssistant : NSObject {

	NSString* _bundleIdentifier;
	long long _contentType;
	BOOL _isAutoPIPEnabled;
	double _activateDuration;
	double _activationTimestamp;
	/*^block*/id _invalidationBlock;
	NSString* _analyticsIdentifier;

}

@property (nonatomic,readonly) NSString * analyticsIdentifier;              //@synthesize analyticsIdentifier=_analyticsIdentifier - In the implementation block
-(void)invalidate;
-(id)generateAnalyticsPayload;
-(id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(BOOL)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(void)noteBecameInactiveAtTime:(double)arg1 ;
-(void)noteBecameActiveAtTime:(double)arg1 ;
-(NSString *)analyticsIdentifier;
-(id)_generateMutableAnalyticsPayload;
@end

