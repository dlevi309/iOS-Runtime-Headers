/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

@class NSURL, NSString, NSData;


@protocol MSStickerPrivate <NSObject>
@property (nonatomic,readonly) NSURL * imageFileURL; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSData * data; 
@required
-(NSString *)localizedDescription;
-(NSData *)data;
-(NSURL *)imageFileURL;

@end

