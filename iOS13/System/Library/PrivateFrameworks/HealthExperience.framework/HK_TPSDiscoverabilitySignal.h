/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/


@class NSString;

@interface HK_TPSDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _context;

}

@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * context;                       //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)context;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(id)_knowledgeStore;
-(id)_discoverabilitySignalsStream;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 ;
@end

