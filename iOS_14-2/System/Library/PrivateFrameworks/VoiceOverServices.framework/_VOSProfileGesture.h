/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject <NSSecureCoding> {

	VOSGesture* _gesture;
	_VOSProfileCommand* _command;

}

@property (nonatomic,retain) VOSGesture * gesture;                             //@synthesize gesture=_gesture - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * command;              //@synthesize command=_command - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileGestureWithGesture:(id)arg1 ;
+(id)profileGestureWithStringValue:(id)arg1 ;
-(void)setGesture:(VOSGesture *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(VOSGesture *)gesture;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(_VOSProfileCommand *)command;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithGesture:(id)arg1 ;
@end

