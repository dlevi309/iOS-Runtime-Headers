/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSMutableSet, NSMutableDictionary;

@interface UIKeyboardSliceSet : NSObject {

	NSString* _ssid;
	NSMutableSet* _slices;
	CGRect _startRect;
	CGRect _endRect;
	double _leftWidth;
	double _rightWidth;
	double _mergePoint;
	NSMutableDictionary* _controlKeys;

}

@property (readonly) NSMutableSet * slices;                        //@synthesize slices=_slices - In the implementation block
@property (retain) NSString * sliceSetID;                          //@synthesize ssid=_ssid - In the implementation block
@property (assign) CGRect startRect;                               //@synthesize startRect=_startRect - In the implementation block
@property (assign) CGRect endRect;                                 //@synthesize endRect=_endRect - In the implementation block
@property (assign) double leftWidth;                               //@synthesize leftWidth=_leftWidth - In the implementation block
@property (assign) double rightWidth;                              //@synthesize rightWidth=_rightWidth - In the implementation block
@property (assign) double mergePoint;                              //@synthesize mergePoint=_mergePoint - In the implementation block
@property (retain) NSMutableDictionary * controlKeys;              //@synthesize controlKeys=_controlKeys - In the implementation block
+(id)sliceSetWithDictionaryRepresenation:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGRect)startRect;
-(CGRect)endRect;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)addSlice:(id)arg1 ;
-(NSMutableDictionary *)controlKeys;
-(NSMutableSet *)slices;
-(id)initWithSliceID:(id)arg1 ;
-(void)setLeftWidth:(double)arg1 ;
-(void)setRightWidth:(double)arg1 ;
-(NSString *)sliceSetID;
-(void)setSliceSetID:(NSString *)arg1 ;
-(double)leftWidth;
-(double)rightWidth;
-(double)mergePoint;
-(void)setMergePoint:(double)arg1 ;
-(void)setControlKeys:(NSMutableDictionary *)arg1 ;
@end

