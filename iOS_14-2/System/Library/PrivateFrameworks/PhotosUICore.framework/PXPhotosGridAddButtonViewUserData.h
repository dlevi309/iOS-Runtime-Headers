/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGViewUserData.h>

@class NSString;

@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData> {

	long long _style;
	/*^block*/id _actionHandler;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) id actionHandler;               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithStyle:(long long)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)actionHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
@end

