/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)Screen;
-(NSString *)name;
-(CGSize)screen;
-(NSString *)preferredVideoFormat;
-(NSString *)preferredVideoPreviewFormat;
-(IKJSRestrictions *)Restrictions;

@end

