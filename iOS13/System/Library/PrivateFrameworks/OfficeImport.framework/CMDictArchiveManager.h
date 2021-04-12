/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSString, NSMutableString;

@interface CMDictArchiveManager : CMStylingArchiveManager {

	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	BOOL mIsFrameset;

}
-(id)name;
-(unsigned long long)resourceCount;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 type:(int)arg2 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2 ;
-(void)setIsFrameset;
-(id)copyDictionaryWithSizeInfos:(BOOL)arg1 ;
-(id)resourceUrlProtocol;
@end

