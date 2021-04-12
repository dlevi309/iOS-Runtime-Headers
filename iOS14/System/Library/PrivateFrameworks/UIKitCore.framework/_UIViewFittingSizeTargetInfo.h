/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {

	BOOL _dummy;
	float _horizontalPriority;
	float _verticalPriority;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                     //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) float horizontalPriority;              //@synthesize horizontalPriority=_horizontalPriority - In the implementation block
@property (nonatomic,readonly) float verticalPriority;                //@synthesize verticalPriority=_verticalPriority - In the implementation block
@property (assign,getter=isDummy,nonatomic) BOOL dummy;               //@synthesize dummy=_dummy - In the implementation block
-(CGSize)targetSize;
-(void)setDummy:(BOOL)arg1 ;
-(BOOL)isEqualToTargetInfo:(id)arg1 ;
-(BOOL)isDummy;
-(id)description;
-(float)verticalPriority;
-(unsigned long long)hash;
-(float)horizontalPriority;
-(id)initWithTargetSize:(CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

