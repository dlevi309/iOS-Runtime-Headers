/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTKFace, NSMutableDictionary, NSString;

@interface NTKGreenfieldDraftRecipe : NSObject <NSSecureCoding> {

	NTKFace* _originalface;
	NSMutableDictionary* _slotToSampleTemplateMapping;
	NSMutableDictionary* _slotToItemIdMapping;
	NSMutableDictionary* _complicationUniqueIdentifierToOptionTypeMapping;
	NSMutableDictionary* _slotToAppIdentifierMapping;
	NSString* _tempPathOverride;

}

@property (nonatomic,readonly) NTKFace * faceForSharing; 
@property (nonatomic,readonly) BOOL hasComplicationSharingOptions; 
@property (nonatomic,copy) NSString * tempPathOverride;                         //@synthesize tempPathOverride=_tempPathOverride - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)templateForComplicationAtSlot:(id)arg1 face:(id)arg2 ;
+(id)titleFromComplicationOption:(unsigned long long)arg1 ;
+(id)descriptionFromComplicationOption:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFace:(id)arg1 ;
-(NTKFace *)faceForSharing;
-(id)sortedComplicationSharingOptions;
-(NSString *)tempPathOverride;
-(id)slotToSampleTemplateMapping;
-(id)slotToItemIdMapping;
-(id)slotToBundleIdMapping;
-(void)_buildSlotToSampleTemplateMapping;
-(void)_buildSlotToItemIdAndBundleIdMapping;
-(void)_buildOptionTypeMapping;
-(BOOL)_shouldIncludeMetadataForSlot:(id)arg1 ;
-(unsigned long long)optionForComplicationUniqueIdentifier:(id)arg1 ;
-(BOOL)_canShareTemplate:(id)arg1 slot:(id)arg2 ;
-(void)setComplicationOption:(unsigned long long)arg1 forComplicationUniqueIdentifier:(id)arg2 ;
-(BOOL)hasComplicationSharingOptions;
-(void)setTempPathOverride:(NSString *)arg1 ;
@end

