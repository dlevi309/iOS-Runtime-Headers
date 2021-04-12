/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAppSessionCompletedEvent : WFEvent {

	unsigned _duration;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned duration;              //@synthesize duration=_duration - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(void)setDuration:(unsigned)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(unsigned)duration;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)source;
@end

