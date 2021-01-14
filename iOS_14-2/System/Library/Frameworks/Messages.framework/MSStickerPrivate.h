/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

