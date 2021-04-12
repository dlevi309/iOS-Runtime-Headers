/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVDataValueTransformer.h>

@class NSData;

@interface AVAirMessageTransformer : AVDataValueTransformer {

	NSData* _previousUnusedData;
	Class _messageClass;

}

@property (nonatomic,readonly) Class messageClass;              //@synthesize messageClass=_messageClass - In the implementation block
-(Class)messageClass;
-(void)resetState;
-(id)initWithMessageClass:(Class)arg1 ;
-(id)dataForMessage:(id)arg1 ;
-(id)reverseTransformerForMessageData:(id)arg1 ;
@end

