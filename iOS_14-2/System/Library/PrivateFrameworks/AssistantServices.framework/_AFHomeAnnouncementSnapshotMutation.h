/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFHomeAnnouncementSnapshotMutating.h>

@class AFHomeAnnouncementSnapshot, AFHomeAnnouncement, NSString;

@interface _AFHomeAnnouncementSnapshotMutation : NSObject <AFHomeAnnouncementSnapshotMutating> {

	AFHomeAnnouncementSnapshot* _baseModel;
	unsigned long long _state;
	AFHomeAnnouncement* _lastPlayedAnnouncement;
	struct {
		unsigned isDirty : 1;
		unsigned hasState : 1;
		unsigned hasLastPlayedAnnouncement : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setState:(unsigned long long)arg1 ;
-(void)setLastPlayedAnnouncement:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

