/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDecimalNumber *)value;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)save;
-(id)initWithPassSerialNumber:(id)arg1 ;
-(BOOL)wentToMax;
-(void)setWentToMax:(BOOL)arg1 ;
@end

