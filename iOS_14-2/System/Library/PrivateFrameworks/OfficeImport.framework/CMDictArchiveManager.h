/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

