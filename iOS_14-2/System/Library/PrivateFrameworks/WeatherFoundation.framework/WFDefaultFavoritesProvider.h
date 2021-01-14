/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFFavoriteLocationProvider.h>

@protocol WFFavoriteLocationProviderDelegate;
@class NSString;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider> {

	id<WFFavoriteLocationProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)locations;
-(void)addLocation:(id)arg1 ;
-(void)setLocations:(id)arg1 ;
-(id)init;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<WFFavoriteLocationProviderDelegate>)arg1 ;
-(id)locationFromCity:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2 ;
-(void)removeLocation:(id)arg1 ;
-(BOOL)canProvideDefaultFavorites;
@end

