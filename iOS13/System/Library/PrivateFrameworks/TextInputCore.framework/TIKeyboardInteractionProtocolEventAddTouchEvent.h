/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardTouchEvent, NSString;

@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <TIKeyboardInteractionProtocolEvent, NSSecureCoding> {

	TIKeyboardTouchEvent* _touchEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sendTo:(id)arg1 ;
-(id)initWithTouchEvent:(id)arg1 ;
@end

