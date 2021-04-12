/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {

	NSHashTable* _clients;

}
+(id)shared;
-(void)addClient:(id)arg1 ;
-(id)init;
-(void)didChangeContentSizeCategory:(id)arg1 ;
-(void)didChangeDarkenColorsStatus:(id)arg1 ;
-(void)didChangeThemeParameters;
-(void)dealloc;
@end

