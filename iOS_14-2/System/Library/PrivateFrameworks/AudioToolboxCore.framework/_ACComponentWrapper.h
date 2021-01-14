/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ACComponentWrapper : NSObject <NSSecureCoding> {

	shared_ptr<APComponent>* mComponent;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithComponent:(shared_ptr<APComponent>*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

