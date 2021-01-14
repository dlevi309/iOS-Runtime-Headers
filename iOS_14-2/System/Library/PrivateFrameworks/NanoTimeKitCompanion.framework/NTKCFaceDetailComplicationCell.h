/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_activeColor;
-(id)_inactiveColor;
-(void)_updateState;
-(double)rowHeight;
-(void)_updateLabelFonts;
-(id)_disabledColor;
-(NSString *)slot;
-(NTKComplication *)complication;
-(id)_traitCollectionAdjustedIfNeeded;
-(void)_updateDetailText;
-(BOOL)isRichSlot;
-(id)initWithSlot:(id)arg1 dateSlot:(BOOL)arg2 isRichSlot:(BOOL)arg3 inFace:(id)arg4 ;
-(void)setComplication:(NTKComplication *)arg1 ;
-(BOOL)dateSlot;
@end

