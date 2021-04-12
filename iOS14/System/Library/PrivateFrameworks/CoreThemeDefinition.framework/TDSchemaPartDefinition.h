/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSString, TDSchemaDefinition, NSSet;

@interface TDSchemaPartDefinition : NSManagedObject {

	CUIImage* previewImage;
	NSArray* renditions;
	NSArray* renditionGroups;
	unsigned long long partFeatures;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * widgetID; 
@property (nonatomic,retain) TDSchemaDefinition * element; 
@property (nonatomic,retain) NSSet * productions; 
@property (nonatomic,retain) CUIImage * previewImage; 
@property (nonatomic,copy) NSArray * renditions; 
@property (nonatomic,retain) NSArray * renditionGroups; 
@property (assign,nonatomic) unsigned long long partFeatures; 
-(id)_schema;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(unsigned long long)partFeatures;
-(long long)elementID;
-(void)setPreviewImage:(CUIImage *)arg1 ;
-(CUIImage *)previewImage;
-(long long)partID;
-(void)didTurnIntoFault;
-(id)displayName;
-(void)dealloc;
-(void)setRenditionGroups:(NSArray *)arg1 ;
-(const SCD_Struct_TD1*)cuiPartDefinition;
-(void)setPartFeatures:(unsigned long long)arg1 ;
-(void)updateDerivedRenditionData;
-(id)bestPreviewRendition;
-(id)validStatesWithDocument:(id)arg1 ;
-(long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1 ;
-(NSArray *)renditionGroups;
@end

