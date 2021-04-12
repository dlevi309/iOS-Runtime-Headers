/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSString;

@interface CHTextInputProtoSettings : NSObject {

	BOOL _autoLineBreakEnabled;
	BOOL _autoLineBreakRequireWeakCursor;
	BOOL _lineBreakVerticalBarGestureEnabled;
	BOOL _lineBreakVerticalBarUpToDelete;
	BOOL _preventLeftoverCharsInSubwordGestures;
	double _autoLineBreakMinVerticalDistance;
	double _autoLineBreakDualBreakVerticalDistance;
	double _autoLineBreakAreaWidthFactor;
	double _subwordGestureEndingSpeedRange;
	double _subwordGestureSpeedThreshold;

}

@property (nonatomic,copy,readonly) NSString * recognitionLocaleIdentifier; 
@property (nonatomic,readonly) BOOL autoLineBreakEnabled;                                  //@synthesize autoLineBreakEnabled=_autoLineBreakEnabled - In the implementation block
@property (nonatomic,readonly) BOOL autoLineBreakRequireWeakCursor;                        //@synthesize autoLineBreakRequireWeakCursor=_autoLineBreakRequireWeakCursor - In the implementation block
@property (nonatomic,readonly) double autoLineBreakMinVerticalDistance;                    //@synthesize autoLineBreakMinVerticalDistance=_autoLineBreakMinVerticalDistance - In the implementation block
@property (nonatomic,readonly) double autoLineBreakDualBreakVerticalDistance;              //@synthesize autoLineBreakDualBreakVerticalDistance=_autoLineBreakDualBreakVerticalDistance - In the implementation block
@property (nonatomic,readonly) double autoLineBreakAreaWidthFactor;                        //@synthesize autoLineBreakAreaWidthFactor=_autoLineBreakAreaWidthFactor - In the implementation block
@property (nonatomic,readonly) BOOL lineBreakVerticalBarGestureEnabled;                    //@synthesize lineBreakVerticalBarGestureEnabled=_lineBreakVerticalBarGestureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL lineBreakVerticalBarUpToDelete;                        //@synthesize lineBreakVerticalBarUpToDelete=_lineBreakVerticalBarUpToDelete - In the implementation block
@property (nonatomic,readonly) double subwordGestureEndingSpeedRange;                      //@synthesize subwordGestureEndingSpeedRange=_subwordGestureEndingSpeedRange - In the implementation block
@property (nonatomic,readonly) double subwordGestureSpeedThreshold;                        //@synthesize subwordGestureSpeedThreshold=_subwordGestureSpeedThreshold - In the implementation block
@property (nonatomic,readonly) BOOL preventLeftoverCharsInSubwordGestures;                 //@synthesize preventLeftoverCharsInSubwordGestures=_preventLeftoverCharsInSubwordGestures - In the implementation block
+(id)sharedSettings;
-(NSString *)recognitionLocaleIdentifier;
-(double)subwordGestureEndingSpeedRange;
-(double)subwordGestureSpeedThreshold;
-(BOOL)preventLeftoverCharsInSubwordGestures;
-(BOOL)lineBreakVerticalBarGestureEnabled;
-(BOOL)lineBreakVerticalBarUpToDelete;
-(BOOL)autoLineBreakEnabled;
-(BOOL)autoLineBreakRequireWeakCursor;
-(double)autoLineBreakAreaWidthFactor;
-(double)autoLineBreakMinVerticalDistance;
-(double)autoLineBreakDualBreakVerticalDistance;
@end

