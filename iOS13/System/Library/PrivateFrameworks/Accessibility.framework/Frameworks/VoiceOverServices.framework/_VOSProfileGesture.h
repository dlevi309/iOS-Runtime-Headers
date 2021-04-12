/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGesture:(VOSGesture *)arg1 ;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(_VOSProfileCommand *)command;
-(VOSGesture *)gesture;
-(id)_initWithGesture:(id)arg1 ;
@end

