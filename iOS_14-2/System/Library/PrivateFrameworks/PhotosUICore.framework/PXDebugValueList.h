/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface PXDebugValueList : NSObject <NSFastEnumeration> {

	NSMutableArray* _debugValues;

}

@property (nonatomic,readonly) NSMutableArray * debugValues;              //@synthesize debugValues=_debugValues - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)addValueWithLabel:(id)arg1 ;
-(void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2 ;
-(void)addValueWithLabel:(id)arg1 doubleValue:(double)arg2 ;
-(void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5 ;
-(void)addValueWithLabel:(id)arg1 integerValue:(long long)arg2 ;
-(void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 highlightStyle:(unsigned long long)arg3 ;
-(void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 ;
-(NSMutableArray *)debugValues;
-(void)addValueWithLabel:(id)arg1 highlightedScore:(double)arg2 ;
@end

