/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKAttachmentInfo, NSString;

@interface _WKAttachment : NSObject <WKObject> {

	ObjectStorage<API::Attachment> _attachment;

}

@property (nonatomic,readonly) _WKAttachmentInfo * info; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)uniqueIdentifier;
-(_WKAttachmentInfo *)info;
-(BOOL)isConnected;
-(Object*)_apiObject;
-(void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestInfo:(/*^block*/id)arg1 ;
-(void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

