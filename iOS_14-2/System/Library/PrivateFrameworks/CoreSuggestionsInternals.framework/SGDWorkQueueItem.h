/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol NSSecureCoding;
@class SGDWorkQueueName, NSString, NSObject;

@interface SGDWorkQueueItem : NSObject {

	SGDWorkQueueName* _name;
	NSString* _filename;
	NSObject*<NSSecureCoding> _object;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long fails; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * queueId; 
-(void)finish;
-(void)markAsFailed;
-(unsigned long long)fails;
-(NSObject*<NSSecureCoding>)object;
-(id)description;
-(NSString *)queueId;
-(unsigned long long)state;
-(void)dealloc;
-(id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3 ;
@end

