/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(id)init;
-(void)dealloc;
-(id)copy;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)resetOperationConfiguration;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)applyToOperation:(id)arg1 ;
-(CKOperationConfiguration *)operationConfiguration;
@end

