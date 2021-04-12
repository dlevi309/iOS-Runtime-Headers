/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKCompanionAppDelegate;
@class NSString, UIImage;

@interface NTKCompanionApp : NSObject {

	BOOL _fetchingIcon;
	NSString* _name;
	NSString* _watchApplicationIdentifier;
	NSString* _containerApplicationIdentifier;
	id<NTKCompanionAppDelegate> _delegate;
	UIImage* _icon;

}

@property (assign,nonatomic) BOOL fetchingIcon;                                        //@synthesize fetchingIcon=_fetchingIcon - In the implementation block
@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * watchApplicationIdentifier;                    //@synthesize watchApplicationIdentifier=_watchApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * containerApplicationIdentifier;                //@synthesize containerApplicationIdentifier=_containerApplicationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCompanionAppDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)name;
-(id<NTKCompanionAppDelegate>)delegate;
-(void)setDelegate:(id<NTKCompanionAppDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)complication;
-(NSString *)watchApplicationIdentifier;
-(NSString *)containerApplicationIdentifier;
-(void)setContainerApplicationIdentifier:(NSString *)arg1 ;
-(void)setWatchApplicationIdentifier:(NSString *)arg1 ;
-(void)setFetchingIcon:(BOOL)arg1 ;
-(BOOL)fetchingIcon;
@end

