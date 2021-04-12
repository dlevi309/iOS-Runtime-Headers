/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SRNotificationUsage : NSObject <SRSampleExporting, NSSecureCoding> {

	NSString* _bundleIdentifier;
	long long _event;

}

@property (copy) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long event;                                 //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)notificationUsageWithBundleIdentifier:(id)arg1 eventType:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(long long)event;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setEvent:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
@end

