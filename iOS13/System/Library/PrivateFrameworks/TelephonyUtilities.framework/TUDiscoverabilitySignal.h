/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSString;

@interface TUDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _context;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)identifier;
-(NSString *)context;
-(id)_discoverabilitySignalsStream;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
@end

