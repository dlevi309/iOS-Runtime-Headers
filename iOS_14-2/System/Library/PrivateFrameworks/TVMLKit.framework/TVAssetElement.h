/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)url;
-(NSString *)adamID;
-(NSNumber *)persistentID;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)extrasURL;
-(NSString *)actionParams;
-(unsigned long long)keyDelivery;
-(NSNumber *)rentalAdamID;
-(IKAssetElement *)assetElement;
@end

