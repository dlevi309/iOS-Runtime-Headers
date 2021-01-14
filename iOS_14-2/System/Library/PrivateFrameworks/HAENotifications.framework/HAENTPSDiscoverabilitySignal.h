/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@class NSString;

@interface HAENTPSDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _context;

}

@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * context;                       //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)bundleIdentifier;
-(NSString *)context;
-(id)_knowledgeStore;
-(id)_discoverabilitySignalsStream;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 ;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
@end

