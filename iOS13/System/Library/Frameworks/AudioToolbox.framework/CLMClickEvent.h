/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)eventType;
-(unsigned long long)absoluteTime;
-(void)setAbsoluteTime:(unsigned long long)arg1 ;
-(void)setEventType:(long long)arg1 ;
@end

