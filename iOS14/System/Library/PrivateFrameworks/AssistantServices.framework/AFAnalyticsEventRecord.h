/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/SiriCoreSQLiteRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFAnalyticsEvent, NSString, NSDate;

@interface AFAnalyticsEventRecord : NSObject <SiriCoreSQLiteRecord, NSSecureCoding> {

	AFAnalyticsEvent* _event;
	NSString* _streamUID;
	NSDate* _dateCreated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) AFAnalyticsEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * streamUID;                  //@synthesize streamUID=_streamUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;                  //@synthesize dateCreated=_dateCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)siriCoreSQLiteRecord_enumerateStorageKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)dateCreated;
-(void)encodeWithCoder:(id)arg1 ;
-(AFAnalyticsEvent *)event;
-(id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)streamUID;
@end

