/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)doubleValue;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(void)setStringValue:(id)arg1;
-(void)setDoubleValue:(double)arg1;
-(long long)valueType;
-(void)setBoolValue:(BOOL)arg1;
-(void)setValueType:(long long)arg1;

@end

