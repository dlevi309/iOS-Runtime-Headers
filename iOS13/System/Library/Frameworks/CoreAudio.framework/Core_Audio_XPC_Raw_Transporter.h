/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface Core_Audio_XPC_Raw_Transporter : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)object;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
@end

