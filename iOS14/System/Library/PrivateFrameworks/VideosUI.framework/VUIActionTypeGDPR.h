/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary, IKAppContext;

@interface VUIActionTypeGDPR : VUIAction {

	NSDictionary* _contextData;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) NSDictionary * contextData;                    //@synthesize contextData=_contextData - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
-(NSDictionary *)contextData;
-(void)setContextData:(NSDictionary *)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 appContext:(id)arg2 ;
@end

