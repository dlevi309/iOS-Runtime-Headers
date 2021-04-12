/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSURL, NSString;

@interface PLImageDataInfo : NSObject {

	BOOL _deliveredPlaceholder;
	BOOL _canDownloadFromCloud;
	long long _deliveredFormat;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	NSString* _UTI;
	long long _EXIFOrientation;

}

@property (assign) long long deliveredFormat;                     //@synthesize deliveredFormat=_deliveredFormat - In the implementation block
@property (assign) BOOL deliveredPlaceholder;                     //@synthesize deliveredPlaceholder=_deliveredPlaceholder - In the implementation block
@property (assign) BOOL canDownloadFromCloud;                     //@synthesize canDownloadFromCloud=_canDownloadFromCloud - In the implementation block
@property (retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (retain) NSString * sandboxExtensionToken;              //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (retain) NSString * UTI;                                //@synthesize UTI=_UTI - In the implementation block
@property (assign) long long EXIFOrientation;                     //@synthesize EXIFOrientation=_EXIFOrientation - In the implementation block
-(NSString *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(id)description;
-(long long)deliveredFormat;
-(void)setDeliveredFormat:(long long)arg1 ;
-(BOOL)canDownloadFromCloud;
-(void)setCanDownloadFromCloud:(BOOL)arg1 ;
-(long long)EXIFOrientation;
-(void)setEXIFOrientation:(long long)arg1 ;
-(NSURL *)URL;
-(NSString *)UTI;
-(BOOL)deliveredPlaceholder;
-(void)setDeliveredPlaceholder:(BOOL)arg1 ;
@end

