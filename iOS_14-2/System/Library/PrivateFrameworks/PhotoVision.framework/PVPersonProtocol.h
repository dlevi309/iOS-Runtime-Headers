/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
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
-(unsigned long long)faceCount;
-(NSString *)localIdentifier;
-(BOOL)hidden;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1;
-(id<PVFaceProtocol>)keyFace;
-(NSString *)anonymizedName;
-(void)pv_addMergeCandidatePersons:(id)arg1;
-(id)personLocalIdentifiers;
-(long long)manualOrder;
-(void)setManualOrder:(long long)arg1;
-(long long)verifiedType;
-(BOOL)favorite;
-(void)setKeyFace:(id)arg1;

@end

