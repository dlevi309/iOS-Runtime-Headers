/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(_WKAttachmentInfo *)info;
-(NSString *)uniqueIdentifier;
-(NSString *)description;
-(void)requestInfo:(/*^block*/id)arg1 ;
-(void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(/*^block*/id)arg4 ;
-(Object*)_apiObject;
-(void)dealloc;
@end

