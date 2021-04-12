/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSData, NSURL, NSString, NSDictionary, NSDate, NSArray, DDScannerResult, IMBalloonPluginDataSource;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying> {

	BOOL _update;
	BOOL _sticker;
	BOOL _shouldExpire;
	BOOL _isPlayed;
	BOOL _isFromMe;
	NSAttributedString* _text;
	NSData* _data;
	NSURL* _url;
	NSString* _breadcrumbText;
	NSString* _statusText;
	NSDictionary* _userInfo;
	NSString* _messageGUID;
	NSDate* _time;
	NSString* _associatedMessageGUID;
	NSString* _pluginBundleID;
	NSArray* _consumedSessionPayloads;
	NSString* _pluginSessionGUID;
	DDScannerResult* _dataDetectedResult;
	NSArray* _attachments;
	IMBalloonPluginDataSource* _datasource;
	NSString* _sender;

}

@property (nonatomic,retain) NSDate * time;                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSArray * consumedSessionPayloads;                          //@synthesize consumedSessionPayloads=_consumedSessionPayloads - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                     //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * associatedMessageGUID;                           //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (nonatomic,retain) NSString * pluginSessionGUID;                               //@synthesize pluginSessionGUID=_pluginSessionGUID - In the implementation block
@property (nonatomic,retain) NSString * pluginBundleID;                                  //@synthesize pluginBundleID=_pluginBundleID - In the implementation block
@property (nonatomic,retain) DDScannerResult * dataDetectedResult;                       //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                      //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic,__weak) IMBalloonPluginDataSource * datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                              //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL isPlayed;                                              //@synthesize isPlayed=_isPlayed - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideAttachments; 
@property (nonatomic,copy) NSString * sender;                                            //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSData * data;                                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * breadcrumbText;                                  //@synthesize breadcrumbText=_breadcrumbText - In the implementation block
@property (nonatomic,retain) NSString * statusText;                                      //@synthesize statusText=_statusText - In the implementation block
@property (assign,getter=isUpdate,nonatomic) BOOL update;                                //@synthesize update=_update - In the implementation block
@property (assign,getter=isSticker,nonatomic) BOOL sticker;                              //@synthesize sticker=_sticker - In the implementation block
@property (assign,nonatomic) BOOL shouldExpire;                                          //@synthesize shouldExpire=_shouldExpire - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)__ck_photoCompositionString;
-(id)__ck_photoCompositionMediaObjects;
-(id)cleansedCopy;
-(id)__ck_superFormatStringTransferGUIDs:(id*)arg1 mediaObjects:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSArray *)attachments;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)time;
-(NSAttributedString *)text;
-(void)setTime:(NSDate *)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)pluginBundleID;
-(void)setPluginBundleID:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)isFromMe;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(BOOL)isPlayed;
-(NSString *)breadcrumbText;
-(void)setDataDetectedResult:(DDScannerResult *)arg1 ;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(void)setConsumedSessionPayloads:(NSArray *)arg1 ;
-(NSString *)messageGUID;
-(DDScannerResult *)dataDetectedResult;
-(IMBalloonPluginDataSource *)datasource;
-(NSArray *)consumedSessionPayloads;
-(NSString *)associatedMessageGUID;
-(void)setAssociatedMessageGUID:(NSString *)arg1 ;
-(id)initWithMessageItem:(id)arg1 ;
-(BOOL)isSticker;
-(NSString *)pluginSessionGUID;
-(BOOL)isUpdate;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(void)addAttachmentsFromFilePaths:(id)arg1 ;
-(BOOL)isEqualToPluginPayload:(id)arg1 ;
-(BOOL)shouldExpire;
-(void)setBreadcrumbText:(NSString *)arg1 ;
-(void)setUpdate:(BOOL)arg1 ;
-(void)setSticker:(BOOL)arg1 ;
-(void)setShouldExpire:(BOOL)arg1 ;
-(void)setPluginSessionGUID:(NSString *)arg1 ;
-(void)setIsPlayed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 additionalAllowedClasses:(id)arg2 ;
-(BOOL)shouldHideAttachments;
-(void)addAttachmentsFromFileTransferGUIDs:(id)arg1 ;
@end

