/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedRecognitionImage : CUINamedLookup

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize physicalSizeInMeters; 
@property (nonatomic,readonly) int exifOrientation; 
-(CGImageRef)image;
-(int)exifOrientation;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CGSize)physicalSizeInMeters;
@end

