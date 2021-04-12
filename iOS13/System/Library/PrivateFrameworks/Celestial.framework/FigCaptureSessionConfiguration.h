/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSMutableArray* _connections;
	long long _configurationID;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)configurationID;
-(BOOL)xctestAuthorizedToStealDevice;
-(void)setConfigurationID:(long long)arg1 ;
-(void)setUsesAppAudioSession:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setAllowedToRunInWindowedLayout:(BOOL)arg1 ;
-(void)setMultiCamSession:(BOOL)arg1 ;
-(void)setXctestAuthorizedToStealDevice:(BOOL)arg1 ;
-(void)addConnectionConfiguration:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isMultiCamSession;
-(NSArray *)connectionConfigurations;
-(NSArray *)sourceConfigurations;
-(BOOL)allowedToRunInWindowedLayout;
-(BOOL)usesAppAudioSession;
-(BOOL)configuresAppAudioSession;
-(NSArray *)sinkConfigurations;
-(void)removeConnectionConfiguration:(id)arg1 ;
@end

