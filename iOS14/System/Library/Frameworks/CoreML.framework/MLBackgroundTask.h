/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)cancelTaskWithIdentifier:(id)arg1 ;
+(BOOL)scheduleTask:(id)arg1 ;
+(BOOL)cancelAllTasks;
+(BOOL)taskIsScheduledWithIdentifier:(id)arg1 ;
-(id)init;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)taskIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)activityForScheduling;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

