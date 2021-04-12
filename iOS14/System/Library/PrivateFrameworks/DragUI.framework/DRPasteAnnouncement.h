/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DragUI.framework/DragUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DRPasteAnnouncementEndpoint, NSUUID, NSString;

@interface DRPasteAnnouncement : NSObject <NSSecureCoding> {

	DRPasteAnnouncementEndpoint* _source;
	DRPasteAnnouncementEndpoint* _destination;
	NSUUID* _pasteboardUUID;

}

@property (nonatomic,readonly) NSString * localizedAnnouncementText; 
@property (nonatomic,readonly) DRPasteAnnouncementEndpoint * source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) DRPasteAnnouncementEndpoint * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSUUID * pasteboardUUID;                                //@synthesize pasteboardUUID=_pasteboardUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DRPasteAnnouncementEndpoint *)destination;
-(DRPasteAnnouncementEndpoint *)source;
-(id)initWithSource:(id)arg1 destination:(id)arg2 pasteboardUUID:(id)arg3 ;
-(NSUUID *)pasteboardUUID;
-(NSString *)localizedAnnouncementText;
-(BOOL)canCoalesceWithAnnouncement:(id)arg1 ;
@end

