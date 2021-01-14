/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
*/

#import <libobjc.A.dylib/FLLoggingContext.h>
@class NSString, NSFileManager, NSUserDefaults;


@protocol FLLoggingContext <FLTelemetryReporter>
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,copy,readonly) NSString * timestampReferenceIdentifier; 
@property (nonatomic,readonly) NSFileManager * fileManager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSUserDefaults * userDefaults; 
@required
-(unsigned long long)now;
-(NSFileManager *)fileManager;
-(NSUserDefaults *)userDefaults;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)timestampReferenceIdentifier;

@end


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSUserDefaults, NSObject;

@interface FLLoggingContext : NSObject <FLLoggingContext> {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;
	NSString* _timestampReferenceIdentifier;
	NSFileManager* _fileManager;

}

@property (nonatomic,copy) NSString * timestampReferenceIdentifier;              //@synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                        //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)now;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(id)initWithFileManager:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)timestampReferenceIdentifier;
-(void)setTimestampReferenceIdentifier:(NSString *)arg1 ;
-(void)report:(id)arg1 payload:(id)arg2 ;
@end

