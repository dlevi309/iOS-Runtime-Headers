/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDate, NSSet;


@protocol PLSyncableDetectedFace <NSObject,PFPhotosFaceRepresentation,PLSyncableObject>
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
@property (nonatomic,copy) NSDate * adjustmentVersion; 
@property (nonatomic,retain) id<PLSyncablePerson> person; 
@property (nonatomic,retain) NSSet * rejectedPersons; 
@property (nonatomic,retain) id<PLSyncablePerson> personBeingKeyFace; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (nonatomic,readonly) BOOL isTrainingFace; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int trainingType; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(id<PLSyncablePerson>)person;
-(int)trainingType;
-(BOOL)hidden;
-(double)centerY;
-(BOOL)manual;
-(void)setHidden:(BOOL)arg1;
-(double)size;
-(double)centerX;
-(void)setTrainingType:(int)arg1;
-(void)setSize:(double)arg1;
-(NSDate *)adjustmentVersion;
-(void)setCloudLocalState:(short)arg1;
-(void)setCenterX:(double)arg1;
-(void)setCenterY:(double)arg1;
-(long long)sourceWidth;
-(void)setSourceWidth:(long long)arg1;
-(long long)sourceHeight;
-(void)setSourceHeight:(long long)arg1;
-(void)setManual:(BOOL)arg1;
-(int)nameSource;
-(void)setNameSource:(int)arg1;
-(int)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(int)arg1;
-(void)setAdjustmentVersion:(id)arg1;
-(id)syncDescription;
-(void)setPerson:(id)arg1;
-(BOOL)isTrainingFace;
-(id)pointerDescription;
-(NSSet *)rejectedPersons;
-(int)cloudNameSource;
-(short)cloudLocalState;
-(void)setCloudNameSource:(int)arg1;
-(void)setRejectedPersons:(id)arg1;
-(void)setPersonBeingKeyFace:(id)arg1;
-(id<PLSyncablePerson>)personBeingKeyFace;

@end

