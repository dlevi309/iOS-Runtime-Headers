/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray;

@interface PSYActivityInfo : NSObject <NSSecureCoding> {

	NSString* _label;
	NSString* _machServiceName;
	NSString* _priority;
	NSNumber* _timeoutSeconds;
	NSArray* _sessionTypes;
	NSString* _backboardPrelaunchBundleIdentifier;

}

@property (nonatomic,copy) NSString * backboardPrelaunchBundleIdentifier;              //@synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                 //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,copy) NSString * priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutSeconds;                                  //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSArray * sessionTypes;                                     //@synthesize sessionTypes=_sessionTypes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithPlist:(id)arg1 ;
-(NSNumber *)timeoutSeconds;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)machServiceName;
-(id)description;
-(void)setSessionTypes:(NSArray *)arg1 ;
-(NSArray *)sessionTypes;
-(void)setTimeoutSeconds:(NSNumber *)arg1 ;
-(NSString *)backboardPrelaunchBundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setBackboardPrelaunchBundleIdentifier:(NSString *)arg1 ;
-(NSString *)priority;
-(NSString *)label;
-(void)setPriority:(NSString *)arg1 ;
@end

