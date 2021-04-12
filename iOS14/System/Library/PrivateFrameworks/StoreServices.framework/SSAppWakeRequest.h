/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface SSAppWakeRequest : NSObject <NSCopying> {

	NSString* _appIdentifier;
	NSDictionary* _launchOptions;
	NSString* _processAssertionIdentifier;
	double _processAssertionInterval;
	NSString* _processAssertionReason;
	BOOL _shouldLaunchApp;

}

@property (nonatomic,copy) NSString * appIdentifier;                           //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * launchOptions;                       //@synthesize launchOptions=_launchOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldLaunchApp;                             //@synthesize shouldLaunchApp=_shouldLaunchApp - In the implementation block
@property (nonatomic,copy) NSString * processAssertionIdentifier;              //@synthesize processAssertionIdentifier=_processAssertionIdentifier - In the implementation block
@property (assign,nonatomic) double processAssertionInterval;                  //@synthesize processAssertionInterval=_processAssertionInterval - In the implementation block
@property (nonatomic,copy) NSString * processAssertionReason;                  //@synthesize processAssertionReason=_processAssertionReason - In the implementation block
+(id)familyContentRemovalRequestWithAppIdentifier:(id)arg1 accountPairs:(id)arg2 ;
+(id)newsstandFinishRequestWithAppIdentifier:(id)arg1 issueIdentifiers:(id)arg2 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSDictionary *)launchOptions;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(NSString *)appIdentifier;
-(void)setShouldLaunchApp:(BOOL)arg1 ;
-(void)setProcessAssertionIdentifier:(NSString *)arg1 ;
-(void)setProcessAssertionInterval:(double)arg1 ;
-(void)setProcessAssertionReason:(NSString *)arg1 ;
-(BOOL)shouldLaunchApp;
-(NSString *)processAssertionIdentifier;
-(double)processAssertionInterval;
-(NSString *)processAssertionReason;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

