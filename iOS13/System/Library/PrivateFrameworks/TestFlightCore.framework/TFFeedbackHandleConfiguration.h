/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _incidentId;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * incidentId;                             //@synthesize incidentId=_incidentId - In the implementation block
+(id)configurationFromUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)incidentId;
-(void)setIncidentId:(NSString *)arg1 ;
-(id)encodedAsUserInfo;
@end

