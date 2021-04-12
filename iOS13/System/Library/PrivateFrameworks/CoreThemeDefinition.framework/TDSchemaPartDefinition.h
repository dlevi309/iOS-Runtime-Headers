/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)displayName;
-(id)_schema;
-(long long)elementID;
-(void)didTurnIntoFault;
-(long long)partID;
-(CUIImage *)previewImage;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(unsigned long long)partFeatures;
-(void)setPreviewImage:(CUIImage *)arg1 ;
-(void)setRenditionGroups:(NSArray *)arg1 ;
-(const SCD_Struct_TD1*)cuiPartDefinition;
-(void)setPartFeatures:(unsigned long long)arg1 ;
-(void)updateDerivedRenditionData;
-(id)bestPreviewRendition;
-(id)validStatesWithDocument:(id)arg1 ;
-(long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1 ;
-(NSArray *)renditionGroups;
@end

