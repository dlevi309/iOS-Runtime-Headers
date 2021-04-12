/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayout.h>

@protocol EQKitLayout <NSObject>
@required
-(double)depth;
-(double)width;
-(double)height;
-(BOOL)layoutWithContext:(id)arg1;
-(double)vsize;
-(CGRect*)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2;
-(double)naturalAlignmentOffset;

@end


@protocol EQKitRootNode;
@class EQKitBox, EQKitEnvironmentInstance, NSString;

@interface EQKitLayout : NSObject <EQKitLayout> {

	id<EQKitRootNode> mRoot;
	EQKitBox* mBox;
	double mAscent;
	double mDescent;
	double mLeading;
	double mNaturalAlignmentOffset;
	double mScale;
	BOOL mSingleLineHeight;
	EQKitEnvironmentInstance* mEnvironment;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(double)depth;
-(double)width;
-(double)height;
-(EQKitBox *)box;
-(BOOL)layoutWithContext:(id)arg1 ;
-(double)vsize;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(id)initWithRoot:(id)arg1 environment:(id)arg2 ;
-(double)naturalAlignmentOffset;
@end

