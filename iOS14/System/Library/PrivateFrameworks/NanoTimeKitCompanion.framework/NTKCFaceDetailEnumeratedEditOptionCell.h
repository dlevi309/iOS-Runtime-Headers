/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(double)rowHeight;
-(id)initWithEditOption:(id)arg1 ;
-(NTKEditOption *)editOption;
@end

