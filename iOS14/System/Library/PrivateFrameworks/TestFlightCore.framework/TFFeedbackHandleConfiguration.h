/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setIncidentId:(NSString *)arg1 ;
-(NSString *)incidentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encodedAsUserInfo;
@end

