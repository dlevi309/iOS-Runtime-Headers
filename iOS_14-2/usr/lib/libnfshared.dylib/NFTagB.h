/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

@class NSData;


@protocol NFTagB
@property (nonatomic,copy,readonly) NSData * pupi; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL applicationDataCoding; 
@property (nonatomic,copy,readonly) NSData * selectedAID; 
@required
-(NSData *)pupi;
-(NSData *)applicationData;
-(NSData *)selectedAID;
-(BOOL)applicationDataCoding;

@end

