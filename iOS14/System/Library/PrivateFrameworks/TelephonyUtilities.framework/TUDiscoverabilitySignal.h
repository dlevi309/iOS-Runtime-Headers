/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)context;
-(id)_discoverabilitySignalsStream;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
@end

