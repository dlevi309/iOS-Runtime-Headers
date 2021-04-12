/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class NSString;


@protocol SFKeychainItemAttributes <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@required
-(void)setLocalizedLabel:(id)arg1;
-(NSString *)localizedLabel;
-(NSString *)persistentIdentifier;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(id)arg1;

@end

