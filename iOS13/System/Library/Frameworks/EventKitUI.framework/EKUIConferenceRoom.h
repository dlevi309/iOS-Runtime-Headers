/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKDirectoryLocation;

@interface EKUIConferenceRoom : NSObject {

	BOOL _supportsAvailability;
	BOOL _availabilityRequestInProgress;
	EKDirectoryLocation* _location;
	long long _availability;

}

@property (nonatomic,retain) EKDirectoryLocation * location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL supportsAvailability;                       //@synthesize supportsAvailability=_supportsAvailability - In the implementation block
@property (assign,nonatomic) BOOL availabilityRequestInProgress;              //@synthesize availabilityRequestInProgress=_availabilityRequestInProgress - In the implementation block
@property (assign,nonatomic) long long availability;                          //@synthesize availability=_availability - In the implementation block
-(id)init;
-(EKDirectoryLocation *)location;
-(void)setLocation:(EKDirectoryLocation *)arg1 ;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(BOOL)supportsAvailability;
-(void)setSupportsAvailability:(BOOL)arg1 ;
-(BOOL)availabilityRequestInProgress;
-(void)setAvailabilityRequestInProgress:(BOOL)arg1 ;
@end

