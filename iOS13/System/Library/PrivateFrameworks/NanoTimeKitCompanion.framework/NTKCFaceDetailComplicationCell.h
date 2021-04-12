/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell {

	BOOL _dateSlot;
	BOOL _isRichSlot;
	BOOL _active;
	BOOL _enabled;
	NSString* _slot;
	NTKComplication* _complication;

}

@property (nonatomic,readonly) NSString * slot;                           //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) BOOL dateSlot;                             //@synthesize dateSlot=_dateSlot - In the implementation block
@property (nonatomic,readonly) BOOL isRichSlot;                           //@synthesize isRichSlot=_isRichSlot - In the implementation block
@property (assign,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
+(id)reuseIdentifier;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)rowHeight;
-(void)_updateState;
-(id)_disabledColor;
-(id)_inactiveColor;
-(id)_activeColor;
-(NSString *)slot;
-(void)_updateLabelFonts;
-(void)_updateDetailText;
-(NTKComplication *)complication;
-(id)_traitCollectionAdjustedIfNeeded;
-(BOOL)isRichSlot;
-(id)initWithSlot:(id)arg1 dateSlot:(BOOL)arg2 isRichSlot:(BOOL)arg3 inFace:(id)arg4 ;
-(void)setComplication:(NTKComplication *)arg1 ;
-(BOOL)dateSlot;
@end

