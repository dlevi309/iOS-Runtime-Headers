/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, PXTitleSubtitleLabelSpec;


@protocol PXMutableTitleSubtitleCALayerPromise <PXMutableCALayerPromise>
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * spec; 
@property (assign,nonatomic) long long typesettingMode; 
@required
-(void)setSpec:(id)arg1;
-(void)setTypesettingMode:(long long)arg1;
-(long long)typesettingMode;
-(NSString *)titleText;
-(void)setTitleText:(id)arg1;
-(void)setSubtitleText:(id)arg1;
-(PXTitleSubtitleLabelSpec *)spec;
-(NSString *)subtitleText;

@end

