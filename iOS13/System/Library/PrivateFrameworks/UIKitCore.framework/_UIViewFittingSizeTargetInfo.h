/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)horizontalPriority;
-(float)verticalPriority;
-(CGSize)targetSize;
-(BOOL)isEqualToTargetInfo:(id)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3 ;
-(BOOL)isDummy;
-(void)setDummy:(BOOL)arg1 ;
@end

