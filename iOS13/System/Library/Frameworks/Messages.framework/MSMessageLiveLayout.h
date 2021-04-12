/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <Messages/MSMessageLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding> {

	MSMessageTemplateLayout* _alternateLayout;

}

@property (nonatomic,readonly) MSMessageTemplateLayout * alternateLayout;              //@synthesize alternateLayout=_alternateLayout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAlternateLayout:(id)arg1 ;
-(MSMessageTemplateLayout *)alternateLayout;
@end

