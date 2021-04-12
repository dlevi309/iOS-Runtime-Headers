/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSString;


@protocol CUTSOSMetric <CUTMetric>
@property (readonly) unsigned long long sosDomain; 
@property (readonly) unsigned long long sosType; 
@property (readonly) unsigned long long sosError; 
@property (readonly) NSString * operationID; 
@required
-(NSString *)operationID;
-(unsigned long long)sosDomain;
-(unsigned long long)sosType;
-(unsigned long long)sosError;

@end

