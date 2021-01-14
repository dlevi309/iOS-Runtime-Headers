/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INHomeAttributeExport <NSObject,JSExport>
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long valueType; 
@property (assign,nonatomic) BOOL boolValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSString * stringValue; 
@required
-(long long)valueType;
-(double)doubleValue;
-(BOOL)boolValue;
-(id)init;
-(void)setDoubleValue:(double)arg1;
-(void)setType:(long long)arg1;
-(NSString *)stringValue;
-(void)setBoolValue:(BOOL)arg1;
-(void)setStringValue:(id)arg1;
-(long long)type;
-(void)setValueType:(long long)arg1;

@end

