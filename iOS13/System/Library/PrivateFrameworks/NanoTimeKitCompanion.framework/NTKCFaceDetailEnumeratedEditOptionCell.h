/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell {

	BOOL _active;
	NTKEditOption* _editOption;

}

@property (nonatomic,readonly) NTKEditOption * editOption;              //@synthesize editOption=_editOption - In the implementation block
@property (assign,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)rowHeight;
-(id)initWithEditOption:(id)arg1 overrideText:(id)arg2 ;
-(NTKEditOption *)editOption;
@end

