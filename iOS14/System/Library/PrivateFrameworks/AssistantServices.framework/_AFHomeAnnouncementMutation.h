/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFHomeAnnouncementMutating.h>

@class AFHomeAnnouncement, NSString, NSDate;

@interface _AFHomeAnnouncementMutation : NSObject <AFHomeAnnouncementMutating> {

	AFHomeAnnouncement* _baseModel;
	NSString* _identifier;
	unsigned long long _startedHostTime;
	unsigned long long _finishedHostTime;
	NSDate* _startedDate;
	NSDate* _finishedDate;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasStartedHostTime : 1;
		unsigned hasFinishedHostTime : 1;
		unsigned hasStartedDate : 1;
		unsigned hasFinishedDate : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(void)setIdentifier:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setStartedHostTime:(unsigned long long)arg1 ;
-(void)setFinishedHostTime:(unsigned long long)arg1 ;
-(void)setStartedDate:(id)arg1 ;
-(void)setFinishedDate:(id)arg1 ;
@end

