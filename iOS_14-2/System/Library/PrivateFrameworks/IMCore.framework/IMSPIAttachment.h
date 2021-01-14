/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSURL, NSDictionary, NSDate;

@interface IMSPIAttachment : NSObject {

	NSString* _guid;
	NSURL* _fileUrl;
	long long _fileTransferState;
	NSString* _uti;
	BOOL _isSticker;
	BOOL _isOutgoing;
	NSDictionary* _attributionInfo;
	NSDate* _creationDate;

}

@property (retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (retain) NSURL * fileUrl;                             //@synthesize fileUrl=_fileUrl - In the implementation block
@property (assign) long long fileTransferState;                 //@synthesize fileTransferState=_fileTransferState - In the implementation block
@property (retain) NSString * uti;                              //@synthesize uti=_uti - In the implementation block
@property (assign) BOOL isSticker;                              //@synthesize isSticker=_isSticker - In the implementation block
@property (assign) BOOL isOutgoing;                             //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (retain) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (readonly) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)uti;
-(BOOL)isOutgoing;
-(NSString *)guid;
-(void)setUti:(NSString *)arg1 ;
-(BOOL)isSticker;
-(id)description;
-(NSDate *)creationDate;
-(NSURL *)fileUrl;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(id)bundleID;
-(void)setIsSticker:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(id)initWithGuid:(id)arg1 fileUrl:(id)arg2 transferState:(long long)arg3 uti:(id)arg4 isSticker:(BOOL)arg5 isOutgoing:(BOOL)arg6 attributionInfo:(id)arg7 creationDate:(id)arg8 ;
-(void)setFileUrl:(NSURL *)arg1 ;
-(long long)fileTransferState;
-(void)setFileTransferState:(long long)arg1 ;
-(void)setIsOutgoing:(BOOL)arg1 ;
@end

