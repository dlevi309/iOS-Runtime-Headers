/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class NSString, UIImage;


@protocol SXActionActivity <NSObject>
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(UIImage *)image;
-(unsigned long long)type;
-(NSString *)label;
-(void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;

@end

