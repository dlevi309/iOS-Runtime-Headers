/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSString;


@protocol CUTSOSMetric <CUTMetric>
@property (readonly) unsigned long long sosDomain; 
@property (readonly) unsigned long long sosType; 
@property (readonly) long long sosError; 
@property (readonly) NSString * operationID; 
@required
-(unsigned long long)sosType;
-(NSString *)operationID;
-(long long)sosError;
-(unsigned long long)sosDomain;

@end

