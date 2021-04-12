/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSString;


@protocol NUPage <NUPageStyling,NUPageNextActionable,NUAdContextProvider>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL allowNeighboringAdvertising; 
@required
-(NSString *)identifier;
-(id)viewController;
-(void)prepare;
-(void)unprepare;
-(void)activityProvider:(/*^block*/id)arg1;
-(BOOL)allowNeighboringAdvertising;

@end

