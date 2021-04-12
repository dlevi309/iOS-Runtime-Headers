/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSData, NSFileWrapper;

@interface _WKAttachmentInfo : NSObject {

	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSString>* _utiType;
	RetainPtr<NSString>* _filePath;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSFileWrapper * fileWrapper; 
-(NSString *)name;
-(NSData *)data;
-(NSString *)contentType;
-(NSFileWrapper *)fileWrapper;
-(NSString *)filePath;
-(id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4 ;
@end

