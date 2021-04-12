/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>
#import <libobjc.A.dylib/WBSIconRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {

	BOOL _iconGenerationEnabled;
	BOOL _iconDownloadingEnabled;
	NSString* _monogramTitle;
	CGSize _minimumIconSize;
	CGSize _maximumIconSize;

}

@property (getter=isIconGenerationEnabled,nonatomic,readonly) BOOL iconGenerationEnabled;                //@synthesize iconGenerationEnabled=_iconGenerationEnabled - In the implementation block
@property (getter=isIconDownloadingEnabled,nonatomic,readonly) BOOL iconDownloadingEnabled;              //@synthesize iconDownloadingEnabled=_iconDownloadingEnabled - In the implementation block
@property (nonatomic,readonly) CGSize minimumIconSize;                                                   //@synthesize minimumIconSize=_minimumIconSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumIconSize;                                                   //@synthesize maximumIconSize=_maximumIconSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogramTitle;                                            //@synthesize monogramTitle=_monogramTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize sizeForDrawing; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
-(CGSize)maximumIconSize;
-(CGSize)sizeForDrawing;
-(BOOL)isIconGenerationEnabled;
-(NSString *)monogramTitle;
-(BOOL)isIconDownloadingEnabled;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
@end

