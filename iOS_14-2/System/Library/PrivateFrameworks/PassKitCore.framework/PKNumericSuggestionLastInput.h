/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSMutableDictionary, NSDecimalNumber;

@interface PKNumericSuggestionLastInput : NSObject {

	NSString* _serialNumber;
	NSMutableDictionary* _passLastInputDictionary;

}

@property (nonatomic,copy) NSDecimalNumber * value; 
@property (assign,nonatomic) BOOL wentToMax; 
-(id)init;
-(void)save;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(BOOL)wentToMax;
-(void)setWentToMax:(BOOL)arg1 ;
-(id)initWithPassSerialNumber:(id)arg1 ;
-(NSDecimalNumber *)value;
@end

