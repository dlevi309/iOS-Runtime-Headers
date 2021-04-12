/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

@class NSString;


@protocol VNModelFile <NSObject>
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,readonly) _sFILE* ptrFile; 
@optional
-(NSString *)resourcePath;
-(_sFILE*)ptrFile;
-(void)setResourcePath:(id)arg1;

@required
-(const void*)baseAddress;
-(unsigned long long)length;
-(void)advise:(long long)arg1;

@end

