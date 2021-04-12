/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class SXComponents;


@protocol SXDOMObjectProviding <NSObject>
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,readonly) SXComponents * components; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
@required
-(SXComponents *)components;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)componentStyleForIdentifier:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id)componentStyleForIdentifiers:(id)arg1;
-(id)textStyleForIdentifier:(id)arg1;
-(id)componentTextStyleForIdentifiers:(id)arg1;
-(id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
-(id)resourceForIdentifier:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id<SXDocumentStyle>)documentStyle;
-(id<SXAutoPlacement>)autoPlacement;

@end

