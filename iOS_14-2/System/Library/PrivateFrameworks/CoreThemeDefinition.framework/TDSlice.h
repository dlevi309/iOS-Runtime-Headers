/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

