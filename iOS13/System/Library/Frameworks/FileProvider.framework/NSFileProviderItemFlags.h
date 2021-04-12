/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol NSFileProviderItemFlags <NSObject>
@property (getter=isUserExecutable,nonatomic,readonly) BOOL userExecutable; 
@property (getter=isUserReadable,nonatomic,readonly) BOOL userReadable; 
@property (getter=isUserWritable,nonatomic,readonly) BOOL userWritable; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isPathExtensionHidden,nonatomic,readonly) BOOL pathExtensionHidden; 
@required
-(BOOL)isHidden;
-(BOOL)isPathExtensionHidden;
-(BOOL)isUserReadable;
-(BOOL)isUserWritable;
-(BOOL)isUserExecutable;

@end

