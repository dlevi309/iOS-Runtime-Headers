/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSURL, NSAttributedString;

@interface DDContextMenuAction : NSObject {

	NSURL* _url;
	_DDResult* _result;
	NSAttributedString* _menuTitle;

}
+(id)contextMenuConfigurationAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 inView:(id)arg3 context:(id)arg4 menuIdentifier:(id)arg5 ;
+(id)contextMenuConfigurationForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 inView:(id)arg5 context:(id)arg6 menuIdentifier:(id)arg7 ;
+(id)contextMenuConfigurationWithURL:(id)arg1 inView:(id)arg2 context:(id)arg3 menuIdentifier:(id)arg4 ;
+(id)updateContext:(id)arg1 withSourceRect:(CGRect)arg2 ;
+(id)contextMenuConfigurationWithResult:(_DDResult*)arg1 inView:(id)arg2 context:(id)arg3 menuIdentifier:(id)arg4 ;
-(void)dealloc;
-(id)initAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(id)contextMenuConfigurationWithIdentifier:(id)arg1 inView:(id)arg2 context:(id)arg3 ;
-(id)initForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 ;
-(id)initWithResult:(_DDResult*)arg1 URL:(id)arg2 ;
-(id)previewActionForResult:(_DDResult*)arg1 URL:(id)arg2 context:(id)arg3 ;
-(void)_updateMenuElementItems:(id)arg1 withActions:(id)arg2 view:(id)arg3 ;
-(void)_updateMenuElementItems:(id)arg1 withActionClasses:(id)arg2 view:(id)arg3 result:(_DDResult*)arg4 URL:(id)arg5 context:(id)arg6 ;
-(void)commonInitWithResult:(_DDResult*)arg1 URL:(id)arg2 ;
@end

