/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)copy;
-(CKOperationConfiguration *)operationConfiguration;
-(BOOL)allowsCellularAccess;
-(long long)qualityOfService;
-(void)dealloc;
@end

