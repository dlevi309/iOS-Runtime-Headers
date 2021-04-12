/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOTransitIconDataSource.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {

	unsigned _cartoID;
	unsigned _defaultTransitType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID;                         //@synthesize cartoID=_cartoID - In the implementation block
@property (nonatomic,readonly) unsigned defaultTransitType;              //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(id)initWithCartoId:(unsigned)arg1 defaultTransitType:(unsigned)arg2 ;
@end

