/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary, IKAppContext;

@interface VUIActionPromise : VUIAction {

	NSDictionary* _contextDataDictionary;
	IKAppContext* _appContext;

}

@property (nonatomic,readonly) NSDictionary * contextDataDictionary;              //@synthesize contextDataDictionary=_contextDataDictionary - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;                    //@synthesize appContext=_appContext - In the implementation block
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 appContext:(id)arg2 ;
-(NSDictionary *)contextDataDictionary;
@end

