/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

@class AKAuthorizationScopeChoices;


@protocol AKAuthorizationEditableDataSources <NSObject>
@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices; 
@property (assign,nonatomic) BOOL editableScopeChoicesChanged; 
@required
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(BOOL)editableScopeChoicesChanged;
-(void)setEditableScopeChoicesChanged:(BOOL)arg1;

@end

