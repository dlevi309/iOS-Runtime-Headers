/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _backgroundTaskRecordsByTaskIdentifier;
	NSMutableDictionary* _backgroundTaskRecordsByRecordName;

}

@property (retain) NSMutableDictionary * backgroundTaskRecordsByTaskIdentifier;              //@synthesize backgroundTaskRecordsByTaskIdentifier=_backgroundTaskRecordsByTaskIdentifier - In the implementation block
@property (retain) NSMutableDictionary * backgroundTaskRecordsByRecordName;                  //@synthesize backgroundTaskRecordsByRecordName=_backgroundTaskRecordsByRecordName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)archiveAtPath:(id)arg1 ;
-(void)setBackgroundTaskRecordsByTaskIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setBackgroundTaskRecordsByRecordName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundTaskRecordsByRecordName;
-(NSMutableDictionary *)backgroundTaskRecordsByTaskIdentifier;
-(void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(void)addBackgroundDownloadRecord:(id)arg1 forRecordName:(id)arg2 ;
-(id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1 ;
-(id)backgroundDownloadRecordForRecordName:(id)arg1 ;
-(void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1 ;
-(void)removeBackgroundDownloadRecordForRecordName:(id)arg1 ;
-(id)remainingTasks;
@end

