/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
*/

@class NSString, NSDictionary;


@protocol SRPClientRequest <NSObject>
@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy,readonly) NSString * recordLabel; 
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain,readonly) NSDictionary * escrowRecord; 
@property (nonatomic,copy,readonly) NSString * recordID; 
@required
-(NSString *)dsid;
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(NSString *)recordID;

@end

