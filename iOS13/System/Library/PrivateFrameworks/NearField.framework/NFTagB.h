/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

@class NSData;


@protocol NFTagB
@property (nonatomic,copy,readonly) NSData * pupi; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL applicationDataCoding; 
@property (nonatomic,copy,readonly) NSData * selectedAID; 
@required
-(NSData *)applicationData;
-(NSData *)selectedAID;
-(NSData *)pupi;
-(BOOL)applicationDataCoding;

@end

