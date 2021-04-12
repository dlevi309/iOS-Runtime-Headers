/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NURouter;
@interface NUWelcomeToNewsPageFactory : NSObject {

	id<NURouter> _router;

}

@property (nonatomic,readonly) id<NURouter> router;              //@synthesize router=_router - In the implementation block
-(id<NURouter>)router;
-(id)initWithRouter:(id)arg1 ;
-(id)createWelcomeToNewsPage;
@end

