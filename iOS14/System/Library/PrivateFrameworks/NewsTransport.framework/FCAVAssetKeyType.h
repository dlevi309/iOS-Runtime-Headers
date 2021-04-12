/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSData, NSDate;


@protocol FCAVAssetKeyType
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isExpired; 
@required
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(NSData *)data;
-(BOOL)isExpired;

@end

