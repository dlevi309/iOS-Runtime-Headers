/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

@class AKAuthorizationScopeChoices;


@protocol AKAuthorizationEditableDataSources <NSObject>
@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices; 
@property (assign,nonatomic) BOOL editableScopeChoicesChanged; 
@required
-(void)setEditableScopeChoicesChanged:(BOOL)arg1;
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(BOOL)editableScopeChoicesChanged;

@end

