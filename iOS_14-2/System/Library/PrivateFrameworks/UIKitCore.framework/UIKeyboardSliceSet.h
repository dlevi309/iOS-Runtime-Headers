/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)slices;
-(void)setStartRect:(CGRect)arg1 ;
-(id)description;
-(void)setLeftWidth:(double)arg1 ;
-(void)setRightWidth:(double)arg1 ;
-(id)initWithSliceID:(id)arg1 ;
-(void)setSliceSetID:(NSString *)arg1 ;
-(void)setMergePoint:(double)arg1 ;
-(void)setControlKeys:(NSMutableDictionary *)arg1 ;
-(void)addSlice:(id)arg1 ;
-(double)leftWidth;
-(void)setEndRect:(CGRect)arg1 ;
-(NSString *)sliceSetID;
-(double)rightWidth;
-(double)mergePoint;
-(NSMutableDictionary *)controlKeys;
-(CGRect)endRect;
-(CGRect)startRect;
-(void)dealloc;
@end

