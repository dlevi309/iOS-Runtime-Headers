/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)sendTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTouchEvent:(id)arg1 ;
@end

