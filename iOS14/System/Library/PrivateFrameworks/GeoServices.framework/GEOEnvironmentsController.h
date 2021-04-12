/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOEnvironmentsControllerDelegate;
@class NSArray;

@interface GEOEnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	id<GEOEnvironmentsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOEnvironmentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GEOEnvironmentsControllerDelegate>)delegate;
-(void)reloadEnvironments;
-(void)reloadEnvironments:(/*^block*/id)arg1 ;
-(id)environmentInfosForSection:(long long)arg1 ;
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(id)activeEnvironment;
-(void)setDelegate:(id<GEOEnvironmentsControllerDelegate>)arg1 ;
-(void)dealloc;
@end

