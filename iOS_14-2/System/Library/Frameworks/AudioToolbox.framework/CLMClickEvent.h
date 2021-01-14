/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLMClickEvent : NSObject <NSSecureCoding> {

	unsigned long long _absoluteTime;
	long long _eventType;

}

@property (assign) unsigned long long absoluteTime;              //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign) long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventType:(long long)arg1 ;
-(long long)eventType;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)absoluteTime;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setAbsoluteTime:(unsigned long long)arg1 ;
@end

