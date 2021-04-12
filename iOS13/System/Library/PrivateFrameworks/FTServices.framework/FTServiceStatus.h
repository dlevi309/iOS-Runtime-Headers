/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@interface FTServiceStatus : NSObject {

	unsigned long long _supportedServicesFlags;
	int _supportedServicesToken;
	BOOL _blockPost;

}

@property (assign,nonatomic) int supportedServicesToken;                    //@synthesize supportedServicesToken=_supportedServicesToken - In the implementation block
@property (assign) unsigned long long supportedServicesFlags;               //@synthesize supportedServicesFlags=_supportedServicesFlags - In the implementation block
@property (assign,nonatomic) BOOL blockPost;                                //@synthesize blockPost=_blockPost - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL faceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL faceTimeMultiwaySupported; 
+(id)sharedInstance;
-(void)dealloc;
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(void)_reload;
-(void)_addObservers;
-(BOOL)faceTimeAudioSupported;
-(BOOL)faceTimeMultiwaySupported;
-(void)_removeObservers;
-(unsigned long long)supportedServicesFlags;
-(unsigned long long)_noCache_supportedServicesFlags;
-(void)setSupportedServicesFlags:(unsigned long long)arg1 ;
-(BOOL)blockPost;
-(void)setSupportedServicesToken:(int)arg1 ;
-(int)supportedServicesToken;
-(void)setBlockPost:(BOOL)arg1 ;
@end

