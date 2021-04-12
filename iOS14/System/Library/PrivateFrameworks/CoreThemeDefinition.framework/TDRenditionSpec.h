/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSDate, TDRenditionKeySpec, NSSet, TDElementProduction, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) BOOL opaque; 
@property (assign,nonatomic) BOOL monochrome; 
@property (assign,nonatomic) int packedPointX; 
@property (assign,nonatomic) int packedPointY; 
@property (assign,nonatomic) BOOL alphaCrop; 
@property (nonatomic,retain) TDRenditionKeySpec * keySpec; 
@property (nonatomic,retain) NSSet * packedRenditions; 
@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDRenditionSpec * parentRendition; 
@property (nonatomic,retain) NSSet * properties; 
@property (assign,nonatomic) CGPoint packedPoint; 
-(void)awakeFromInsert;
-(TDRenditionType *)renditionType;
-(id)propertiesAsDictionary;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)resetToBaseKeySpec;
-(void)setRenditionType:(TDRenditionType *)arg1 ;
-(CGPoint)packedPoint;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(void)setPackedPoint:(CGPoint)arg1 ;
@end

