/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol GEOTransitIconDataSource <NSObject>
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@optional
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;

@required
-(int)iconType;

@end

