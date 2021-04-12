/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
-(id)featuredGroup;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
-(id)footerForGroupStackView:(id)arg1;

@required
-(id)groupAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfSeparationGroup;
-(unsigned long long)indexOfGroup:(id)arg1;
-(BOOL)isInField;
-(BOOL)supportsExternalPresentation;
-(unsigned long long)numberOfGroups;

@end

