/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class TDElementProduction, TDRenditionSpec, NSString;

@interface TDSlice : NSManagedObject {

	CGRect _sliceRect;

}

@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionSpec * rendition; 
@property (assign,nonatomic) CGRect sliceRect; 
@property (assign,nonatomic) CGRect primitiveSliceRect; 
@property (nonatomic,retain) NSString * sliceRectString; 
-(void)awakeFromFetch;
-(CGRect)primitiveSliceRect;
-(void)setPrimitiveSliceRect:(CGRect)arg1 ;
-(void)setSliceRect:(CGRect)arg1 ;
-(CGRect)sliceRect;
@end

