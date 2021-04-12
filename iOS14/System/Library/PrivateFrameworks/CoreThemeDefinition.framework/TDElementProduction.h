/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class TDRenditionKeySpec, TDRenditionType, TDThemeConstant, NSString, NSDate, NSNumber, NSSet, TDNamedElement, TDSchemaPartDefinition;

@interface TDElementProduction : NSManagedObject

@property (nonatomic,retain) TDRenditionKeySpec * baseKeySpec; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDThemeConstant * renditionSubtype; 
@property (nonatomic,retain) TDThemeConstant * zeroCodeArtworkInfo; 
@property (nonatomic,retain) NSString * comment; 
@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * isExcludedFromFilter; 
@property (nonatomic,retain) NSSet * renditions; 
@property (nonatomic,retain) NSSet * tags; 
@property (nonatomic,retain) NSString * universalTypeIdentifier; 
@property (assign,nonatomic) BOOL makeOpaqueIfPossible; 
@property (nonatomic,retain) TDNamedElement * name; 
@property (nonatomic,retain) TDSchemaPartDefinition * partDefinition; 
-(id)relativePath;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end

