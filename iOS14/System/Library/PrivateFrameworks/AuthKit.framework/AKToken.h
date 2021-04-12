/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class NSDate, NSString;

@interface AKToken : NSObject {

	NSDate* _expirationDate;
	NSString* _stringValue;
	NSString* _name;

}

@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)tokenWithBase64String:(id)arg1 ;
+(id)tokenWithValue:(id)arg1 lifetime:(id)arg2 ;
-(NSString *)stringValue;
-(NSString *)name;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setName:(NSString *)arg1 ;
@end

