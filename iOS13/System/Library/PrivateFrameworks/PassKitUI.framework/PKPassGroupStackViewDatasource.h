/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
-(BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
-(id)featuredGroup;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
-(id)footerForGroupStackView:(id)arg1;

@required
-(unsigned long long)indexOfGroup:(id)arg1;
-(unsigned long long)numberOfGroups;
-(id)groupAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfSeparationGroup;
-(BOOL)supportsExternalPresentation;
-(BOOL)isInField;

@end

