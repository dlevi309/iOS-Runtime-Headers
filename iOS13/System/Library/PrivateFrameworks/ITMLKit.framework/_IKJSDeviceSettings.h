/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKJSRestrictions;


@protocol _IKJSDeviceSettings <IKJSDeviceSettings,JSExport>
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * preferredVideoFormat; 
@property (nonatomic,retain,readonly) NSString * preferredVideoPreviewFormat; 
@property (nonatomic,readonly) CGSize Screen; 
@property (nonatomic,readonly) IKJSRestrictions * Restrictions; 
@property (nonatomic,readonly) CGSize screen; 
@required
-(NSString *)name;
-(CGSize)screen;
-(NSString *)preferredVideoFormat;
-(NSString *)preferredVideoPreviewFormat;
-(CGSize)Screen;
-(IKJSRestrictions *)Restrictions;

@end

