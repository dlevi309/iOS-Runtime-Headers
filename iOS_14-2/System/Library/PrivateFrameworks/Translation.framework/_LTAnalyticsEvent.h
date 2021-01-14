/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSLocale;

@interface _LTAnalyticsEvent : NSObject {

	NSString* _eventName;
	double _startTime;
	double _endTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _fields;
	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;

}

@property (nonatomic,copy) NSLocale * sourceLocale;              //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (nonatomic,copy) NSLocale * targetLocale;              //@synthesize targetLocale=_targetLocale - In the implementation block
+(id)timedEventWithName:(id)arg1 ;
-(void)markEnd;
-(id)initWithName:(id)arg1 ;
-(void)addFieldsFromDictionary:(id)arg1 internalOnly:(BOOL)arg2 ;
-(void)addFieldsWithError:(id)arg1 ;
-(void)timestampWithName:(id)arg1 ;
-(NSLocale *)sourceLocale;
-(NSLocale *)targetLocale;
-(void)setSourceLocale:(NSLocale *)arg1 ;
-(void)setTargetLocale:(NSLocale *)arg1 ;
-(void)sendLazy;
-(void)addFieldsFromDictionary:(id)arg1 ;
-(void)markStart;
@end

