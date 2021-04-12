/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {

	NSMutableDictionary* _optionsBySlot;
	NTKEditOption* _nilSlotOption;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(id)dailySnapshotKey;
-(void)setEditOption:(id)arg1 forSlot:(id)arg2 ;
-(id)editOptionForSlot:(id)arg1 ;
-(void)enumerateSlotsWithBlock:(/*^block*/id)arg1 ;
-(id)_alphabeticalSlots;
-(id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3 ;
@end

