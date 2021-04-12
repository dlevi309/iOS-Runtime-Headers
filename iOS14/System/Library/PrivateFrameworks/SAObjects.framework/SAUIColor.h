/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(long long)redValue;
-(long long)blueValue;
-(NSNumber *)alpha;
-(long long)greenValue;
-(void)setRedValue:(long long)arg1 ;
-(void)setAlpha:(NSNumber *)arg1 ;
-(void)setBlueValue:(long long)arg1 ;
-(void)setGreenValue:(long long)arg1 ;
@end

