/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSMutableArray* _connections;
	long long _configurationID;
	NSString* _sessionPreset;
	BOOL _usesAppAudioSession;
	BOOL _configuresAppAudioSession;
	BOOL _allowedToRunInWindowedLayout;
	BOOL _isMultiCamSession;
	BOOL _xctestAuthorizedToStealDevice;

}

@property (assign,nonatomic) long long configurationID;                                  //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) NSArray * connectionConfigurations; 
@property (nonatomic,readonly) NSArray * sourceConfigurations; 
@property (nonatomic,readonly) NSArray * sinkConfigurations; 
@property (nonatomic,retain) NSString * sessionPreset;                                   //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) BOOL usesAppAudioSession;                                   //@synthesize usesAppAudioSession=_usesAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                             //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL allowedToRunInWindowedLayout;                          //@synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout - In the implementation block
@property (assign,getter=isMultiCamSession,nonatomic) BOOL multiCamSession;              //@synthesize isMultiCamSession=_isMultiCamSession - In the implementation block
@property (assign,nonatomic) BOOL xctestAuthorizedToStealDevice;                         //@synthesize xctestAuthorizedToStealDevice=_xctestAuthorizedToStealDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSArray *)sinkConfigurations;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setUsesAppAudioSession:(BOOL)arg1 ;
-(BOOL)usesAppAudioSession;
-(void)setAllowedToRunInWindowedLayout:(BOOL)arg1 ;
-(id)init;
-(long long)configurationID;
-(void)setConfigurationID:(long long)arg1 ;
-(void)addConnectionConfiguration:(id)arg1 ;
-(NSString *)description;
-(NSArray *)connectionConfigurations;
-(NSString *)sessionPreset;
-(BOOL)allowedToRunInWindowedLayout;
-(void)removeConnectionConfiguration:(id)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(BOOL)configuresAppAudioSession;
-(BOOL)xctestAuthorizedToStealDevice;
-(void)setMultiCamSession:(BOOL)arg1 ;
-(void)setXctestAuthorizedToStealDevice:(BOOL)arg1 ;
-(NSArray *)sourceConfigurations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(BOOL)isMultiCamSession;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

