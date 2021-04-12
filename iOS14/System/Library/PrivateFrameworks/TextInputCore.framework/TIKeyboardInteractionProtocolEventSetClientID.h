/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>

@class NSString;

@interface TIKeyboardInteractionProtocolEventSetClientID : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {

	NSString* _clientID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sendTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientID:(id)arg1 keyboardState:(id)arg2 ;
@end

