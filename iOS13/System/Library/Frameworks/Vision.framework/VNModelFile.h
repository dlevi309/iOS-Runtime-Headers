/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

@class NSString;


@protocol VNModelFile <NSObject>
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@optional
-(NSString *)resourcePath;
-(void)setResourcePath:(id)arg1;

@required
-(unsigned long long)length;
-(const void*)baseAddress;
-(void)advise:(long long)arg1;

@end

