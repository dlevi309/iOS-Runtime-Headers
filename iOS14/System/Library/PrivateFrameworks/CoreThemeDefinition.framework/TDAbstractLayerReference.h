/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

