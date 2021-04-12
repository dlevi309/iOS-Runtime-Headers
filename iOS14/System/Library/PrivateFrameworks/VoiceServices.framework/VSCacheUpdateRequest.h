/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSString;

@interface VSCacheUpdateRequest : NSObject {

	NSString* _modelID;
	NSString* _classID;

}
-(id)description;
-(id)modelIdentifier;
-(id)classIdentifier;
-(id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(id)coalescedRequest:(id)arg1 ;
-(void)dealloc;
@end

