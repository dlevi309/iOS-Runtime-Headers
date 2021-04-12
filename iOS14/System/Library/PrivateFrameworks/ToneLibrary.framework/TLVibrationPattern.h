/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)noneVibrationPattern;
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)init;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(double)_computedDuration;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
@end

