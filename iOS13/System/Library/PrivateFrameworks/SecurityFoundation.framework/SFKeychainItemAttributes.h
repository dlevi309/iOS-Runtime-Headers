/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class NSString;


@protocol SFKeychainItemAttributes <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@required
-(NSString *)localizedDescription;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(id)arg1;
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(id)arg1;

@end

