/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/


#import <SharingUI/SharingUI-Structs.h>
@interface SFInfoFetchRequest : NSObject {

	/*^block*/id _infoResponseHandler;
	CGSize _iconSize;

}

@property (assign,nonatomic) CGSize iconSize;                   //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) id infoResponseHandler;              //@synthesize infoResponseHandler=_infoResponseHandler - In the implementation block
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(id)infoResponseHandler;
-(void)setInfoResponseHandler:(id)arg1 ;
@end

