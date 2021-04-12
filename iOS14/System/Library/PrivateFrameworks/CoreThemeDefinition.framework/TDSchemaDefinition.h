/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)previewImage;
-(id)displayName;
@end

