/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXMemoriesBlacklistAccessoryViewSpec : NSObject {

	unsigned long long _type;
	CGRect _contentViewFrame;
	CGRect _accessoryViewFrame;

}

@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect contentViewFrame;                //@synthesize contentViewFrame=_contentViewFrame - In the implementation block
@property (nonatomic,readonly) CGRect accessoryViewFrame;              //@synthesize accessoryViewFrame=_accessoryViewFrame - In the implementation block
+(id)specWithFrame:(CGRect)arg1 ;
-(CGRect)accessoryViewFrame;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithContentViewFrame:(CGRect)arg1 ;
-(CGRect)contentViewFrame;
@end

