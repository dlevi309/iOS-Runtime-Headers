/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFPrivacyReportGridItem <NSObject>
@property (assign,nonatomic,__weak) id<SFPrivacyReportGridItemDelegate> delegate; 
@property (assign,nonatomic) unsigned long long gridPosition; 
@required
-(id<SFPrivacyReportGridItemDelegate>)delegate;
-(void)setGridPosition:(unsigned long long)arg1;
-(unsigned long long)gridPosition;
-(void)setDelegate:(id)arg1;

@end

