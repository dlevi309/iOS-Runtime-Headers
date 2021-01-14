/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXMutableCuratedLibraryAnalysisStatus <NSObject>
@property (assign,nonatomic) long long state; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) float displayProgress; 
@property (assign,nonatomic) BOOL isDaysMonthsYearsStructureEnabled; 
@property (assign,nonatomic) BOOL isDevicePlugged; 
@required
-(void)setLocalizedTitle:(id)arg1;
-(NSString *)localizedTitle;
-(float)progress;
-(NSString *)localizedDescription;
-(void)setProgress:(float)arg1;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)setLocalizedDescription:(id)arg1;
-(void)setIsDevicePlugged:(BOOL)arg1;
-(void)setIsDaysMonthsYearsStructureEnabled:(BOOL)arg1;
-(void)setDisplayProgress:(float)arg1;
-(float)displayProgress;
-(BOOL)isDaysMonthsYearsStructureEnabled;
-(BOOL)isDevicePlugged;

@end

