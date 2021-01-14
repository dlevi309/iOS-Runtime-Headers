/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>

@class NSString;

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource> {

	long long _shieldType;
	NSString* _shieldText;
	NSString* _shieldColorString;

}

@property (nonatomic,readonly) long long shieldType;                      //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                     //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) NSString * shieldColorString;              //@synthesize shieldColorString=_shieldColorString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)shieldColorString;
-(long long)shieldType;
-(NSString *)shieldText;
-(id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3 ;
@end

