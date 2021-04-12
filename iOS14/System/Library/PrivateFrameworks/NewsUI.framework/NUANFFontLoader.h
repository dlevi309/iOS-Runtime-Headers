/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUFontRegistrator.h>

@protocol NUFontRegistration;
@class FCFlintManifest, FCFlintResourceManager, NSMutableArray, FCAsyncOnceOperation, NSString;

@interface NUANFFontLoader : NSObject <NUFontRegistrator> {

	BOOL _hasLoaded;
	long long _relativePriority;
	FCFlintManifest* _flintManifest;
	FCFlintResourceManager* _flintResourceManager;
	NSMutableArray* _fontResourcesToRegister;
	NSMutableArray* _fontResourcesRegistered;
	FCAsyncOnceOperation* _asyncOnceOperation;
	id<NUFontRegistration> _fontRegistration;

}

@property (nonatomic,readonly) FCFlintManifest * flintManifest;                            //@synthesize flintManifest=_flintManifest - In the implementation block
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager;              //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fontResourcesToRegister;                   //@synthesize fontResourcesToRegister=_fontResourcesToRegister - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fontResourcesRegistered;                   //@synthesize fontResourcesRegistered=_fontResourcesRegistered - In the implementation block
@property (nonatomic,readonly) FCAsyncOnceOperation * asyncOnceOperation;                  //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (nonatomic,readonly) id<NUFontRegistration> fontRegistration;                    //@synthesize fontRegistration=_fontRegistration - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                                             //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                   //@synthesize relativePriority=_relativePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCFlintResourceManager *)flintResourceManager;
-(void)setRelativePriority:(long long)arg1 ;
-(long long)relativePriority;
-(FCFlintManifest *)flintManifest;
-(BOOL)hasLoaded;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(id)asyncLoadFontsOnceWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)fontResourcesToRegister;
-(id<NUFontRegistration>)fontRegistration;
-(NSMutableArray *)fontResourcesRegistered;
-(void)registerFontsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 fontRegistration:(id)arg3 ;
-(void)unregisterFontsWithCompletion:(/*^block*/id)arg1 ;
-(id)loadFontsWithCompletion:(/*^block*/id)arg1 ;
@end

