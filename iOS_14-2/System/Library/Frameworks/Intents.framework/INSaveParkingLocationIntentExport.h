/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLPlacemark, NSString;


@protocol INSaveParkingLocationIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * parkingLocation; 
@property (nonatomic,copy) NSString * parkingNote; 
@required
-(id)init;
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(id)arg1;
-(NSString *)parkingNote;
-(void)setParkingNote:(id)arg1;

@end

