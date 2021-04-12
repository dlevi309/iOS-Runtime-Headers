/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchivableContent.h>

@protocol OS_dispatch_data;
@class NSObject, TSPLazyReferenceArray, NSArray, NSString;

@interface TSPUnknownMessage : NSObject <TSPArchivableContent> {

	MessageInfo* _messageInfo;
	NSObject*<OS_dispatch_data> _messageData;
	TSPLazyReferenceArray* _objects;
	NSArray* _datas;

}

@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (nonatomic,readonly) BOOL isDiff; 
@property (nonatomic,readonly) unsigned long long messageVersion; 
@property (nonatomic,readonly) const FieldPath* fieldPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,retain) TSPLazyReferenceArray * objects;                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSArray * datas;                                        //@synthesize datas=_datas - In the implementation block
-(TSPLazyReferenceArray *)objects;
-(void)setObjects:(TSPLazyReferenceArray *)arg1 ;
-(NSArray *)datas;
-(id)init;
-(void)setDatas:(NSArray *)arg1 ;
-(const MessageInfo*)messageInfo;
-(BOOL)isDiff;
-(NSObject*<OS_dispatch_data>)messageData;
-(unsigned long long)messageVersion;
-(const FieldPath*)fieldPath;
-(BOOL)isContentUnknown;
-(id)initWithMessageInfo:(const MessageInfo*)arg1 data:(id)arg2 ;
@end

