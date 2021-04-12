/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, NSArray;


@protocol INGetReservationDetailsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy) NSArray * reservationItemReferences; 
@required
-(id)init;
-(void)setReservationContainerReference:(id)arg1;
-(void)setReservationItemReferences:(id)arg1;
-(NSArray *)reservationItemReferences;
-(INSpeakableString *)reservationContainerReference;

@end

