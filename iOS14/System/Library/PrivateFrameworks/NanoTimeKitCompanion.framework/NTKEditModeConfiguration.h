/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {

	NSMutableDictionary* _optionsBySlot;
	NTKEditOption* _nilSlotOption;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(void)setEditOption:(id)arg1 forSlot:(id)arg2 ;
-(id)editOptionForSlot:(id)arg1 ;
-(void)enumerateSlotsWithBlock:(/*^block*/id)arg1 ;
-(id)_alphabeticalSlots;
-(id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3 ;
@end

