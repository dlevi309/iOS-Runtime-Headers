/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUPage.h>

@protocol NURouter;
@class NUWelcomeToNewsViewController, NUPageStyle, NSString;

@interface NUWelcomeToNewsPage : NSObject <NUPage> {

	id<NURouter> _router;
	NUWelcomeToNewsViewController* _welcomeToNewsViewController;
	unsigned long long _pageNextAction;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) id<NURouter> router;                                                    //@synthesize router=_router - In the implementation block
@property (nonatomic,retain) NUWelcomeToNewsViewController * welcomeToNewsViewController;              //@synthesize welcomeToNewsViewController=_welcomeToNewsViewController - In the implementation block
@property (assign,nonatomic) unsigned long long pageNextAction;                                        //@synthesize pageNextAction=_pageNextAction - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                                                  //@synthesize pageStyle=_pageStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL allowNeighboringAdvertising; 
-(NSString *)identifier;
-(id)viewController;
-(void)prepare;
-(void)unprepare;
-(id<NURouter>)router;
-(NUPageStyle *)pageStyle;
-(void)pageStyling:(/*^block*/id)arg1 ;
-(unsigned long long)pageNextAction;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)activityProvider:(/*^block*/id)arg1 ;
-(BOOL)allowNeighboringAdvertising;
-(void)setPageNextAction:(unsigned long long)arg1 ;
-(id)initWithRouter:(id)arg1 ;
-(NUWelcomeToNewsViewController *)welcomeToNewsViewController;
-(void)setWelcomeToNewsViewController:(NUWelcomeToNewsViewController *)arg1 ;
@end

