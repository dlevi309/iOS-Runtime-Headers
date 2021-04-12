/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding> {

	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)scheduleTask:(id)arg1 ;
+(BOOL)cancelTaskWithIdentifier:(id)arg1 ;
+(BOOL)cancelAllTasks;
+(BOOL)taskIsScheduledWithIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)taskIdentifier;
-(id)activityForScheduling;
-(void)setTaskIdentifier:(NSString *)arg1 ;
@end

