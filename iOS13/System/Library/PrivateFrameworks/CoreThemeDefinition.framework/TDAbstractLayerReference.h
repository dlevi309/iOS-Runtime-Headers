/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface TDAbstractLayerReference : NSManagedObject {

	CGRect _frameRect;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * frameRectString; 
@property (assign,nonatomic) CGRect frameRect; 
@property (nonatomic,retain) NSNumber * opacity; 
@property (nonatomic,retain) NSNumber * blendMode; 
@property (assign,nonatomic) BOOL makeOpaqueIfPossible; 
@property (assign,nonatomic) CGRect primitiveFrameRect; 
-(void)awakeFromFetch;
-(CGRect)frameRect;
-(CGRect)primitiveFrameRect;
-(void)setPrimitiveFrameRect:(CGRect)arg1 ;
-(void)setFrameRect:(CGRect)arg1 ;
@end

