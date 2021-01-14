/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

@class NSURL;


@protocol BSPathProviding <NSObject>
@property (nonatomic,readonly) NSURL * defaultPath; 
@property (nonatomic,readonly) NSURL * libraryPath; 
@property (nonatomic,readonly) NSURL * cachesPath; 
@required
-(NSURL *)defaultPath;
-(NSURL *)cachesPath;
-(NSURL *)libraryPath;

@end

