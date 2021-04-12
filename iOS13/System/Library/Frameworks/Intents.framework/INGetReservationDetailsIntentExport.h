/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, NSArray;


@protocol INGetReservationDetailsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy) NSArray * reservationItemReferences; 
@required
-(id)init;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(id)arg1;
-(NSArray *)reservationItemReferences;
-(void)setReservationItemReferences:(id)arg1;

@end

