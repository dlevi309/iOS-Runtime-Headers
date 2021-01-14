/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface WFCoreDataResultState : NSObject <NSSecureCoding> {

	NSSet* _state;

}

@property (nonatomic,readonly) NSSet * state;              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)state;
@end

