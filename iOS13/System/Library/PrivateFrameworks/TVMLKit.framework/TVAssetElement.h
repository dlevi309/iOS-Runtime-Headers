/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSString, NSURL, NSNumber;

@interface TVAssetElement : TVViewElement

@property (nonatomic,readonly) IKAssetElement * assetElement; 
@property (nonatomic,readonly) NSString * actionParams; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSURL * extrasURL; 
@property (nonatomic,readonly) unsigned long long keyDelivery; 
@property (nonatomic,readonly) NSNumber * persistentID; 
@property (nonatomic,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSURL * url; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(NSURL *)url;
-(NSNumber *)persistentID;
-(NSString *)adamID;
-(unsigned long long)keyDelivery;
-(NSString *)actionParams;
-(NSURL *)extrasURL;
-(NSNumber *)rentalAdamID;
-(IKAssetElement *)assetElement;
@end

