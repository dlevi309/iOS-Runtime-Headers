/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString;


@protocol GEOTransitShieldDataSource <NSObject>
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@required
-(NSString *)shieldText;
-(long long)shieldType;
-(NSString *)shieldColorString;

@end

