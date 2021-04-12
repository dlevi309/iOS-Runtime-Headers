/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSString;


@protocol NUPage <NUPageStyling,NUPageNextActionable,NUAdContextProvider>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL allowNeighboringAdvertising; 
@required
-(void)unprepare;
-(id)viewController;
-(NSString *)identifier;
-(void)prepare;
-(void)activityProvider:(/*^block*/id)arg1;
-(BOOL)allowNeighboringAdvertising;

@end

