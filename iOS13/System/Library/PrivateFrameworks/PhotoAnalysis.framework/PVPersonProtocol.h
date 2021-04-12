/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

@class NSString;


@protocol PVPersonProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@required
-(NSString *)localIdentifier;
-(BOOL)hidden;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1;
-(unsigned long long)faceCount;
-(void)setManualOrder:(long long)arg1;
-(BOOL)favorite;
-(id<PVFaceProtocol>)keyFace;
-(long long)verifiedType;
-(long long)manualOrder;
-(void)setKeyFace:(id)arg1;
-(id)personLocalIdentifiers;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(NSString *)anonymizedName;

@end

