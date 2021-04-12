/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ANAnnouncementContent, ANAnnouncementDestination;

@interface ANAnnouncementRequest : NSObject <NSSecureCoding> {

	ANAnnouncementContent* _content;
	ANAnnouncementDestination* _destination;

}

@property (nonatomic,readonly) ANAnnouncementContent * content;                      //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) ANAnnouncementDestination * destination;              //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithContent:(id)arg1 destination:(id)arg2 ;
-(ANAnnouncementContent *)content;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndpointIdentifier:(id)arg1 ;
-(id)endpointIdentifier;
-(ANAnnouncementDestination *)destination;
-(id)initWithContent:(id)arg1 destination:(id)arg2 ;
@end

