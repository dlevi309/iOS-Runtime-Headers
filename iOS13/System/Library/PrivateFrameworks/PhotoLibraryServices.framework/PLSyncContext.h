/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSArray;


@protocol PLSyncContext <NSObject>
@property (nonatomic,readonly) BOOL serverSupportsVision; 
@property (nonatomic,readonly) BOOL serverSupportsGraphHome; 
@property (nonatomic,readonly) BOOL serverSupportsSuggestion; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe; 
@required
-(BOOL)serverSupportsSuggestion;
-(BOOL)serverSupportsVision;
-(id)makeFace;
-(void)deleteFaces:(id)arg1;
-(id)personForUUID:(id)arg1;
-(BOOL)personUUIDIsDeleted:(id)arg1;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
-(BOOL)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(void)setPersonUUIDsToDedupe:(id)arg1;

@end

