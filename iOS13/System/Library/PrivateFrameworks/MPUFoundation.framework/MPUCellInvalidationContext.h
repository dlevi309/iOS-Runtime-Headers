/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@interface MPUCellInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDownloadStatus;
	BOOL _invalidateLayout;
	BOOL _animated;

}

@property (assign,nonatomic) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateDownloadStatus;                //@synthesize invalidateDownloadStatus=_invalidateDownloadStatus - In the implementation block
@property (assign,nonatomic) BOOL invalidateLayout;                        //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(BOOL)invalidateLayout;
-(BOOL)isAnimated;
-(BOOL)invalidateEverything;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)invalidateDownloadStatus;
-(void)setInvalidateDownloadStatus:(BOOL)arg1 ;
-(void)setInvalidateLayout:(BOOL)arg1 ;
@end

