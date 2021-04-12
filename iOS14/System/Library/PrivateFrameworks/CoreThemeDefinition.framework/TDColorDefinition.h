/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class NSDate, NSNumber, NSManagedObject, TDColorName;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * physicalColor; 
@property (nonatomic,retain) NSManagedObject * colorStatus; 
@property (nonatomic,retain) TDColorName * name; 
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)colorAsString;
@end

