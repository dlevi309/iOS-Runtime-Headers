/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSDate;

@interface CPLLibraryState : NSObject {

	BOOL _disabled;
	NSDate* _disabledDate;
	NSDate* _deleteDate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSDate * disabledDate;                          //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,copy) NSDate * deleteDate;                            //@synthesize deleteDate=_deleteDate - In the implementation block
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSDate *)disabledDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(NSDate *)deleteDate;
-(void)setDeleteDate:(NSDate *)arg1 ;
@end

