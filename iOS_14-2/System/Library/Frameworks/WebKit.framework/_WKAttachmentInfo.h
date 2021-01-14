/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filePath;
-(NSString *)contentType;
-(NSString *)name;
-(NSData *)data;
-(id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4 ;
-(NSFileWrapper *)fileWrapper;
@end

