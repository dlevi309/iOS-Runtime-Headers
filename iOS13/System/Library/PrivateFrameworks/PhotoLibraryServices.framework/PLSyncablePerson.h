/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLSyncablePerson <NSObject,PLSyncableObject>
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,readonly) BOOL userVerified; 
@property (nonatomic,readonly) BOOL graphVerified; 
@property (nonatomic,readonly) BOOL isTombstone; 
@property (nonatomic,readonly) BOOL keyFaceIsPicked; 
@required
-(NSString *)fullName;
-(NSString *)personUUID;
-(id)syncDescription;
-(void)setPersonUUID:(id)arg1;
-(id)pointerDescription;
-(BOOL)isTombstone;
-(void)setFullName:(id)arg1;
-(BOOL)userVerified;
-(BOOL)graphVerified;
-(BOOL)keyFaceIsPicked;
-(void)setKeyFaceToPicked;

@end

