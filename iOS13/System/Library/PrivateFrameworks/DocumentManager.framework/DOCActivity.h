/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <ShareSheet/UIActivity.h>

@protocol DOCItemActivityPerformer;
@class NSArray, NSString;

@interface DOCActivity : UIActivity {

	id<DOCItemActivityPerformer> _actionPerformerProxy;
	NSArray* _items;
	NSString* _identifier;
	NSString* _imageName;
	NSString* _localizedTitle;

}

@property (nonatomic,copy) NSArray * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                     //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) id<DOCItemActivityPerformer> actionPerformerProxy;              //@synthesize actionPerformerProxy=_actionPerformerProxy - In the implementation block
+(long long)activityCategory;
+(id)activityWithIdentifier:(id)arg1 actionPerformerProxy:(id)arg2 ;
+(id)_imageNameForActivityIdentifier:(id)arg1 ;
+(id)_titleForActivityIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)activityType;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithProxy:(id)arg1 identifier:(id)arg2 ;
-(id<DOCItemActivityPerformer>)actionPerformerProxy;
@end

