/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSString, NSDictionary, NSDate;

@interface CLSMessageAttachment : NSObject {

	BOOL _isOutgoing;
	BOOL _isSticker;
	BOOL _hideAttachment;
	NSString* _guid;
	long long _createdDateValue;
	long long _startDateValue;
	NSString* _transferName;
	NSString* _filename;
	NSString* _utiType;
	NSString* _mimeType;
	long long _transferState;
	long long _totalBytes;
	NSDictionary* _userInfo;
	NSDictionary* _stickerUserInfo;
	NSDictionary* _attributionInfo;
	NSString* _originalGUID;

}

@property (nonatomic,readonly) NSDate * createdDate; 
@property (nonatomic,readonly) long long createdDateValue;                  //@synthesize createdDateValue=_createdDateValue - In the implementation block
@property (nonatomic,readonly) long long startDateValue;                    //@synthesize startDateValue=_startDateValue - In the implementation block
@property (nonatomic,readonly) long long transferState;                     //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,readonly) long long totalBytes;                        //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                             //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) BOOL isSticker;                              //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) BOOL hideAttachment;                         //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (nonatomic,readonly) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * transferName;                     //@synthesize transferName=_transferName - In the implementation block
@property (nonatomic,readonly) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * utiType;                          //@synthesize utiType=_utiType - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                         //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * originalGUID;                     //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * stickerUserInfo;              //@synthesize stickerUserInfo=_stickerUserInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
-(id)debugDescription;
-(NSDictionary *)userInfo;
-(NSString *)filename;
-(NSString *)mimeType;
-(NSString *)utiType;
-(BOOL)isOutgoing;
-(long long)totalBytes;
-(NSString *)guid;
-(NSDictionary *)attributionInfo;
-(BOOL)isSticker;
-(long long)transferState;
-(NSDictionary *)stickerUserInfo;
-(BOOL)hideAttachment;
-(NSDate *)createdDate;
-(NSString *)originalGUID;
-(id)initWithAttachmentRecord:(IMDAttachmentRecordStructRef)arg1 ;
-(long long)createdDateValue;
-(long long)startDateValue;
-(NSString *)transferName;
@end

