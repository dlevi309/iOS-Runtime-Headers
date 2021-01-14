/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/

@class NSString;


@protocol VFX.VFXBinding
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * objectName; 
@property (readonly,nonatomic) NSString * bindingName; 
@property (readonly,nonatomic) long long type; 
@property (readonly,nonatomic) long long semantic; 
@property (readonly,nonatomic) double min; 
@property (readonly,nonatomic) double max; 
@required
-(long long)semantic;
-(double)min;
-(double)max;
-(long long)type;
-(NSString *)objectName;
-(NSString *)identifier;
-(NSString *)bindingName;

@end

