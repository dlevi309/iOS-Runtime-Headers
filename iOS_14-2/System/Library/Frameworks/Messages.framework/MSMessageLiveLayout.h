/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAlternateLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MSMessageTemplateLayout *)alternateLayout;
@end

