/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContextualEvent.h>

@class NSString, TPSContextualDuetEventMeta, TPSContextualDuetEventSource, TPSContextualDuetEventValue;

@interface TPSContextualDuetEvent : TPSContextualEvent {

	NSString* _stream;
	TPSContextualDuetEventMeta* _meta;
	TPSContextualDuetEventSource* _source;
	TPSContextualDuetEventValue* _value;

}

@property (nonatomic,copy) NSString * stream;                                  //@synthesize stream=_stream - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventMeta * meta;                  //@synthesize meta=_meta - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventValue * value;                //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(NSString *)stream;
-(TPSContextualDuetEventMeta *)meta;
-(void)setStream:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)newStateFromStateDictionary:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(TPSContextualDuetEventSource *)arg1 ;
-(void)setValue:(TPSContextualDuetEventValue *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMeta:(TPSContextualDuetEventMeta *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TPSContextualDuetEventValue *)value;
-(TPSContextualDuetEventSource *)source;
@end

