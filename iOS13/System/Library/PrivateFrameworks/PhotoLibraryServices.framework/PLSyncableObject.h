/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSyncableObject <NSObject>
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(void)setCloudLocalState:(short)arg1;
-(short)cloudLocalState;
-(id)cplFullRecord;
-(id)momentShare;
-(id)localID;

@end

