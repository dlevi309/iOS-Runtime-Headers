/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString;

@interface MTChange : NSObject {

	NSString* _property;
	id _changedValue;
	id _originalValue;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) id changedValue;                //@synthesize changedValue=_changedValue - In the implementation block
@property (nonatomic,retain) id originalValue;               //@synthesize originalValue=_originalValue - In the implementation block
-(id)description;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3 ;
-(id)changedValue;
-(void)setChangedValue:(id)arg1 ;
@end

