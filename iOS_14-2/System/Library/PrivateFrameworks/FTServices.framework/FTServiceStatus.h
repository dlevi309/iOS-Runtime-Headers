/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(void)setSupportedServicesFlags:(unsigned long long)arg1 ;
-(int)supportedServicesToken;
-(BOOL)faceTimeAudioSupported;
-(BOOL)faceTimeMultiwaySupported;
-(void)_removeObservers;
-(void)_addObservers;
-(unsigned long long)_noCache_supportedServicesFlags;
-(unsigned long long)supportedServicesFlags;
-(void)setSupportedServicesToken:(int)arg1 ;
-(void)_reload;
-(void)dealloc;
-(BOOL)blockPost;
-(void)setBlockPost:(BOOL)arg1 ;
@end

