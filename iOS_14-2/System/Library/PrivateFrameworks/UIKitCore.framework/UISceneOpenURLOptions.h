/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, BSProcessHandle;

@interface UISceneOpenURLOptions : NSObject {

	NSString* _sourceApp;
	BSProcessHandle* _sourceProcessHandle;
	id _annotation;
	BOOL _openInPlace;
	BOOL _openAsDownload;

}

@property (nonatomic,readonly) BSProcessHandle * _sourceProcessHandle;              //@synthesize sourceProcessHandle=_sourceProcessHandle - In the implementation block
@property (nonatomic,readonly) BOOL _openAsDownload;                                //@synthesize openAsDownload=_openAsDownload - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplication;                        //@synthesize sourceApp=_sourceApp - In the implementation block
@property (nonatomic,readonly) id annotation;                                       //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) BOOL openInPlace;                                    //@synthesize openInPlace=_openInPlace - In the implementation block
+(id)_optionsFromDictionary:(id)arg1 ;
-(id)annotation;
-(id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(BOOL)arg4 openAsDownload:(BOOL)arg5 ;
-(NSString *)sourceApplication;
-(id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(BOOL)arg4 ;
-(BOOL)openInPlace;
-(id)description;
-(BOOL)_openAsDownload;
-(unsigned long long)hash;
-(BSProcessHandle *)_sourceProcessHandle;
-(BOOL)isEqual:(id)arg1 ;
@end

