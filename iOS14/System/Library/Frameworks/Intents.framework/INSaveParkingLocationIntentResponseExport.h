/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLPlacemark, NSString;


@protocol INSaveParkingLocationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) CLPlacemark * parkingLocation; 
@property (nonatomic,copy) NSString * parkingNote; 
@required
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(id)arg1;
-(NSString *)parkingNote;
-(void)setParkingNote:(id)arg1;
-(long long)code;

@end

