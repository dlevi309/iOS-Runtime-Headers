/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, TDSchemaCategory, NSSet;

@interface TDSchemaDefinition : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (assign) BOOL published; 
@property (nonatomic,retain) TDSchemaCategory * category; 
@property (nonatomic,retain) NSSet * parts; 
+(const SCD_Struct_TD2*)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2 ;
+(unsigned long long)elementDefinitionCountWithSchema:(id)arg1 ;
+(const SCD_Struct_TD2*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2 ;
-(id)displayName;
-(id)previewImage;
@end

