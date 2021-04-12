/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLPlacemark;


@protocol INRetrieveParkingLocationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) CLPlacemark * parkingLocation; 
@required
-(long long)code;
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(id)arg1;

@end

