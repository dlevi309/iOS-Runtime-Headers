/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@class RUIPage, NSString;

@interface RUIPageElement : RUIElement {

	RUIPage* _page;

}

@property (assign,nonatomic,__weak) RUIPage * page;                      //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(id)staticValues;
@end

