/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {

	NSHashTable* _clients;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)didChangeContentSizeCategory:(id)arg1 ;
-(void)didChangeDarkenColorsStatus:(id)arg1 ;
-(void)didChangeThemeParameters;
@end

