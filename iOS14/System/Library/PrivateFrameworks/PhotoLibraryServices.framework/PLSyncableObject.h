/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSyncableObject <NSObject>
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(id)localID;
-(void)setCloudLocalState:(short)arg1;
-(id)momentShare;
-(id)cplFullRecord;
-(short)cloudLocalState;

@end

