/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKRequestAvailabilityOperation, NSArray;

@interface EKUIConferenceRoomInfo : NSObject {

	EKRequestAvailabilityOperation* _availabilityRequest;
	NSArray* _availabilitySpans;
	long long _availabilityType;

}

@property (retain) EKRequestAvailabilityOperation * availabilityRequest;              //@synthesize availabilityRequest=_availabilityRequest - In the implementation block
@property (retain) NSArray * availabilitySpans;                                       //@synthesize availabilitySpans=_availabilitySpans - In the implementation block
@property (assign) long long availabilityType;                                        //@synthesize availabilityType=_availabilityType - In the implementation block
-(id)init;
-(void)setAvailabilityType:(long long)arg1 ;
-(EKRequestAvailabilityOperation *)availabilityRequest;
-(void)setAvailabilityRequest:(EKRequestAvailabilityOperation *)arg1 ;
-(NSArray *)availabilitySpans;
-(void)setAvailabilitySpans:(NSArray *)arg1 ;
-(long long)availabilityType;
@end

