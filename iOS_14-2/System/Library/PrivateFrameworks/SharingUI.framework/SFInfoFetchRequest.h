/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

