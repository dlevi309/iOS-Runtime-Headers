/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)property;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(id)description;
-(id)changedValue;
-(id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3 ;
-(void)setChangedValue:(id)arg1 ;
@end

