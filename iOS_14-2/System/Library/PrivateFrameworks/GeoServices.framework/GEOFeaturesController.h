/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>

@protocol GEOFeaturesControllerDelegate;
@class NSArray, NSString;

@interface GEOFeaturesController : NSObject <GEOConfigChangeListenerDelegate> {

	NSArray* _features;
	id<GEOFeaturesControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * features;                                             //@synthesize features=_features - In the implementation block
@property (assign,nonatomic,__weak) id<GEOFeaturesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE88*)arg1 ;
-(id)init;
-(NSArray *)features;
-(id<GEOFeaturesControllerDelegate>)delegate;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)setDelegate:(id<GEOFeaturesControllerDelegate>)arg1 ;
-(void)_initializeFeatures;
-(void)dealloc;
@end

