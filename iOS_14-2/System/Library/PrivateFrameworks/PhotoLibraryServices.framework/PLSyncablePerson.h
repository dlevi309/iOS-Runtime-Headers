/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFullName:(id)arg1;
-(NSString *)fullName;
-(BOOL)graphVerified;
-(NSString *)personUUID;
-(void)setPersonUUID:(id)arg1;
-(id)syncDescription;
-(BOOL)userVerified;
-(id)pointerDescription;
-(void)setKeyFaceToPicked;
-(BOOL)keyFaceIsPicked;
-(BOOL)isTombstone;

@end

