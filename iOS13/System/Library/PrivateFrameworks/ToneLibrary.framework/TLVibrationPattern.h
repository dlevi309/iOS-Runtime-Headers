/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {

	NSDictionary* _propertyListRepresentation;
	NSMutableArray* _complexPatternDescription;
	id _contextObject;

}

@property (nonatomic,readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,retain) id contextObject;                                                   //@synthesize contextObject=_contextObject - In the implementation block
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(id)init;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(double)_computedDuration;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
@end

