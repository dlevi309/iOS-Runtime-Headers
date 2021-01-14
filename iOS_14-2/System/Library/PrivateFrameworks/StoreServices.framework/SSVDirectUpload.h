/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSError, NSURL;

@interface SSVDirectUpload : NSObject <SSXPCCoding> {

	NSString* _categoryName;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesSent;
	NSError* _error;
	BOOL _explicitContent;
	long long _persistentIdentifier;
	long long _state;
	NSString* _subtitle;
	NSURL* _thumbnailImageURL;
	NSString* _title;
	NSString* _uploadKind;
	NSString* _uti;

}

@property (nonatomic,copy) NSString * categoryName;                                      //@synthesize categoryName=_categoryName - In the implementation block
@property (assign,nonatomic) long long countOfBytesExpectedToSend;                       //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                                 //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;                             //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailImageURL;                                    //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                               //@synthesize uti=_uti - In the implementation block
@property (setter=_setUploadKind:,nonatomic,copy) NSString * _uploadKind;                //@synthesize uploadKind=_uploadKind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_adoptStatusFromUpload:(id)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setPersistentIdentifier:(long long)arg1 ;
-(long long)persistentIdentifier;
-(NSString *)_uploadKind;
-(NSString *)description;
-(BOOL)isExplicitContent;
-(void)_setUploadKind:(id)arg1 ;
-(long long)countOfBytesSent;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(NSString *)UTI;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

