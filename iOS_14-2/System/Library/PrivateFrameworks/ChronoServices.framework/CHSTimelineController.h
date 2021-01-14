/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/


@protocol CHSChronoWidgetServiceServer;
@class NSString;

@interface CHSTimelineController : NSObject {

	id<CHSChronoWidgetServiceServer> _server;
	NSString* _avocadoIdentifier;
	NSString* _extensionBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * avocadoIdentifier;                      //@synthesize avocadoIdentifier=_avocadoIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
-(id)reloadTimeline;
-(id)initForAvocadoIdentifier:(id)arg1 inBundleIdentifier:(id)arg2 ;
-(NSString *)avocadoIdentifier;
-(NSString *)extensionBundleIdentifier;
@end

