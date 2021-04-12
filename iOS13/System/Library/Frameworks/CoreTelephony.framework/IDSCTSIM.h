/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

@class NSString;


@protocol IDSCTSIM <NSObject>
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned long long slot; 
@required
-(NSString *)phoneNumber;
-(NSString *)label;
-(unsigned long long)slot;
-(NSString *)SIMIdentifier;

@end

