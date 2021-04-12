/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/SSLoggable.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSArray, NSString, SSImageSurface, SSUIServiceOptions, NSDate, SSEnvironmentDescriptionAppleInternalOptions, BSSettings;

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding> {

	NSArray* _elements;
	NSString* _identifier;
	NSString* _sessionIdentifier;
	unsigned long long _presentationMode;
	BOOL _canAutosaveToFiles;
	BOOL _skipShutterSound;
	unsigned _externalFlashLayerContextID;
	SSImageSurface* _imageSurface;
	double _imageScale;
	SSUIServiceOptions* _serviceOptions;
	NSDate* _date;
	unsigned long long _externalFlashLayerRenderID;
	SSEnvironmentDescriptionAppleInternalOptions* _appleInternalOptions;
	NSString* _betaApplicationBundleID;
	NSString* _betaApplicationName;
	CGSize _imagePixelSize;

}

@property (nonatomic,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * elements;                                                             //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) SSImageSurface * imageSurface;                                                    //@synthesize imageSurface=_imageSurface - In the implementation block
@property (assign,nonatomic) CGSize imagePixelSize;                                                            //@synthesize imagePixelSize=_imagePixelSize - In the implementation block
@property (assign,nonatomic) double imageScale;                                                                //@synthesize imageScale=_imageScale - In the implementation block
@property (nonatomic,readonly) CGSize imagePointSize; 
@property (assign,nonatomic) unsigned long long presentationMode;                                              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,retain) SSUIServiceOptions * serviceOptions;                                              //@synthesize serviceOptions=_serviceOptions - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long externalFlashLayerRenderID;                                    //@synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID - In the implementation block
@property (assign,nonatomic) unsigned externalFlashLayerContextID;                                             //@synthesize externalFlashLayerContextID=_externalFlashLayerContextID - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                                       //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (nonatomic,retain) SSEnvironmentDescriptionAppleInternalOptions * appleInternalOptions;              //@synthesize appleInternalOptions=_appleInternalOptions - In the implementation block
@property (nonatomic,copy) NSString * betaApplicationBundleID;                                                 //@synthesize betaApplicationBundleID=_betaApplicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * betaApplicationName;                                                     //@synthesize betaApplicationName=_betaApplicationName - In the implementation block
@property (assign,nonatomic) BOOL canAutosaveToFiles;                                                          //@synthesize canAutosaveToFiles=_canAutosaveToFiles - In the implementation block
@property (assign,nonatomic) BOOL skipShutterSound;                                                            //@synthesize skipShutterSound=_skipShutterSound - In the implementation block
@property (nonatomic,readonly) NSString * loggableDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)imageScale;
-(void)setImageScale:(double)arg1 ;
-(NSArray *)elements;
-(id)init;
-(void)setDate:(NSDate *)arg1 ;
-(SSImageSurface *)imageSurface;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)presentationMode;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)setExternalFlashLayerRenderID:(unsigned long long)arg1 ;
-(void)setExternalFlashLayerContextID:(unsigned)arg1 ;
-(NSString *)loggableDescription;
-(unsigned long long)externalFlashLayerRenderID;
-(unsigned)externalFlashLayerContextID;
-(BSSettings *)bsSettings;
-(CGSize)imagePixelSize;
-(SSUIServiceOptions *)serviceOptions;
-(SSEnvironmentDescriptionAppleInternalOptions *)appleInternalOptions;
-(NSString *)betaApplicationBundleID;
-(NSString *)betaApplicationName;
-(BOOL)canAutosaveToFiles;
-(BOOL)skipShutterSound;
-(void)takeElementsFromDisplayLayout:(id)arg1 ;
-(void)setDebugElements:(id)arg1 ;
-(CGSize)imagePointSize;
-(void)setImageSurface:(SSImageSurface *)arg1 ;
-(void)setImagePixelSize:(CGSize)arg1 ;
-(void)setServiceOptions:(SSUIServiceOptions *)arg1 ;
-(void)setAppleInternalOptions:(SSEnvironmentDescriptionAppleInternalOptions *)arg1 ;
-(void)setBetaApplicationBundleID:(NSString *)arg1 ;
-(void)setBetaApplicationName:(NSString *)arg1 ;
-(void)setCanAutosaveToFiles:(BOOL)arg1 ;
-(void)setSkipShutterSound:(BOOL)arg1 ;
@end

