/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)size;
-(void)setSize:(double)arg1;
-(double)centerX;
-(double)centerY;
-(void)setHidden:(BOOL)arg1;
-(BOOL)hidden;
-(void)setCloudLocalState:(short)arg1;
-(short)cloudLocalState;
-(id)syncDescription;
-(int)nameSource;
-(void)setNameSource:(int)arg1;
-(BOOL)isTrainingFace;
-(void)setCloudNameSource:(int)arg1;
-(void)setRejectedPersons:(id)arg1;
-(NSSet *)rejectedPersons;
-(id<PLSyncablePerson>)personBeingKeyFace;
-(id<PLSyncablePerson>)person;
-(BOOL)manual;
-(long long)sourceHeight;
-(long long)sourceWidth;
-(int)trainingType;
-(void)setPersonBeingKeyFace:(id)arg1;
-(id)pointerDescription;
-(void)setPerson:(id)arg1;
-(int)cloudNameSource;
-(void)setManual:(BOOL)arg1;
-(void)setCenterY:(double)arg1;
-(void)setCenterX:(double)arg1;
-(int)faceAlgorithmVersion;
-(void)setTrainingType:(int)arg1;
-(void)setSourceHeight:(long long)arg1;
-(void)setSourceWidth:(long long)arg1;
-(void)setFaceAlgorithmVersion:(int)arg1;
-(NSDate *)adjustmentVersion;
-(void)setAdjustmentVersion:(id)arg1;

@end

