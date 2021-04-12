/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * alpha; 
@property (assign,nonatomic) long long blueValue; 
@property (assign,nonatomic) long long greenValue; 
@property (assign,nonatomic) long long redValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)color;
+(id)colorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)alpha;
-(void)setAlpha:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(long long)blueValue;
-(void)setBlueValue:(long long)arg1 ;
-(long long)greenValue;
-(void)setGreenValue:(long long)arg1 ;
-(long long)redValue;
-(void)setRedValue:(long long)arg1 ;
@end

