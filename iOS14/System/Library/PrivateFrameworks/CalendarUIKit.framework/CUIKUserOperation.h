/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class NSArray, NSString;

@interface CUIKUserOperation : NSObject {

	BOOL _inverseOperationPrecomputed;
	NSArray* _objects;
	long long _span;
	NSArray* _originalObjects;
	NSArray* _originalSliceDescriptions;
	NSString* _precomputedActionName;
	CUIKUserOperation* _precomputedInverseOperation;

}

@property (retain) NSArray * objects;                                            //@synthesize objects=_objects - In the implementation block
@property (assign) long long span;                                               //@synthesize span=_span - In the implementation block
@property (retain) NSArray * originalObjects;                                    //@synthesize originalObjects=_originalObjects - In the implementation block
@property (retain) NSArray * originalSliceDescriptions;                          //@synthesize originalSliceDescriptions=_originalSliceDescriptions - In the implementation block
@property (retain) NSString * precomputedActionName;                             //@synthesize precomputedActionName=_precomputedActionName - In the implementation block
@property (retain) CUIKUserOperation * precomputedInverseOperation;              //@synthesize precomputedInverseOperation=_precomputedInverseOperation - In the implementation block
@property (assign) BOOL inverseOperationPrecomputed;                             //@synthesize inverseOperationPrecomputed=_inverseOperationPrecomputed - In the implementation block
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(long long)span;
-(void)setSpan:(long long)arg1 ;
-(NSArray *)originalObjects;
-(void)setOriginalObjects:(NSArray *)arg1 ;
-(NSArray *)originalSliceDescriptions;
-(void)setOriginalSliceDescriptions:(NSArray *)arg1 ;
-(NSString *)precomputedActionName;
-(void)setPrecomputedActionName:(NSString *)arg1 ;
-(CUIKUserOperation *)precomputedInverseOperation;
-(void)setPrecomputedInverseOperation:(CUIKUserOperation *)arg1 ;
-(BOOL)inverseOperationPrecomputed;
-(void)setInverseOperationPrecomputed:(BOOL)arg1 ;
@end

