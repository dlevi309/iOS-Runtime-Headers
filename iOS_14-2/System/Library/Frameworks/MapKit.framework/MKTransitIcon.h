/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOTransitIconDataSource.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {

	unsigned _cartoID;
	unsigned _defaultTransitType;

}

@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID;                         //@synthesize cartoID=_cartoID - In the implementation block
@property (nonatomic,readonly) unsigned defaultTransitType;              //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(int)iconType;
-(id)initWithCartoId:(unsigned)arg1 defaultTransitType:(unsigned)arg2 ;
@end

