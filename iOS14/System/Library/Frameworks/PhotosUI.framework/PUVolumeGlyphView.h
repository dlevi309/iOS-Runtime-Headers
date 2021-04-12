/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class CALayer, CAStateController, NSObject, NSString;

@interface PUVolumeGlyphView : UIView <CAMLParserDelegate> {

	CALayer* _glyphLayer;
	CAStateController* _stateController;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	NSString* _stateName;

}

@property (nonatomic,copy) NSString * stateName;                    //@synthesize stateName=_stateName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handleGlyphLayerDidLoad:(id)arg1 ;
-(void)layoutSubviews;
-(NSString *)stateName;
-(void)setStateName:(NSString *)arg1 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
@end

