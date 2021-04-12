/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@class NSString, NSArray, MPAVRoute, UIImage;

@interface MPAVRoutingViewItem : NSObject <_MPStateDumpPropertyListTransformable> {

	BOOL _enabled;
	NSString* _localizedTitle;
	long long _type;
	NSArray* _routes;
	MPAVRoute* _leader;
	NSString* _localizedSubtitle;
	UIImage* _image;
	NSString* _actionIdentifier;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) MPAVRoute * mainRoute; 
@property (nonatomic,readonly) NSArray * routes;                               //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) MPAVRoute * leader;                             //@synthesize leader=_leader - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;              //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;               //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithActionTitle:(id)arg1 subtitle:(id)arg2 enabled:(BOOL)arg3 identifier:(id)arg4 image:(id)arg5 ;
+(id)itemWithRoute:(id)arg1 ;
+(id)itemWithLeader:(id)arg1 members:(id)arg2 ;
-(BOOL)enabled;
-(NSString *)localizedTitle;
-(NSArray *)routes;
-(MPAVRoute *)mainRoute;
-(UIImage *)image;
-(NSString *)localizedSubtitle;
-(id)_stateDumpObject;
-(long long)type;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(MPAVRoute *)leader;
-(BOOL)isEqual:(id)arg1 ;
@end

