/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/IKEntityValueProviding.h>

@class RadioStation, NSString;

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding> {

	RadioStation* _station;

}

@property (nonatomic,readonly) RadioStation * station;              //@synthesize station=_station - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RadioStation *)station;
-(id)initWithStation:(id)arg1 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)rsep_stationName;
-(id)rsep_coreSeedName;
-(id)rsep_stationDescription;
@end

