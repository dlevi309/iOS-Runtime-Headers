/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class NSString;


@protocol SVVideoGravityProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * videoGravity; 
@property (nonatomic,copy,readonly) NSString * portraitVideoGravity; 
@property (nonatomic,copy,readonly) NSString * landscapeVideoGravity; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(NSString *)videoGravity;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(NSString *)portraitVideoGravity;
-(NSString *)landscapeVideoGravity;

@end

