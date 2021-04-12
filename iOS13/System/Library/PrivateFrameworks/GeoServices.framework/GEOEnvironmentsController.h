/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<GEOEnvironmentsControllerDelegate>)delegate;
-(void)setDelegate:(id<GEOEnvironmentsControllerDelegate>)arg1 ;
-(void)reloadEnvironments;
-(void)reloadEnvironments:(/*^block*/id)arg1 ;
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(id)environmentInfosForSection:(long long)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(id)activeEnvironment;
@end

