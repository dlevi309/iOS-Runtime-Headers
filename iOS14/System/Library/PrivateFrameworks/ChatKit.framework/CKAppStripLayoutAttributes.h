/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface CKAppStripLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _showsBorder;
	long long _appStripSize;

}

@property (assign,nonatomic) long long appStripSize;              //@synthesize appStripSize=_appStripSize - In the implementation block
@property (assign,nonatomic) BOOL showsBorder;                    //@synthesize showsBorder=_showsBorder - In the implementation block
-(BOOL)showsBorder;
-(long long)appStripSize;
-(void)setShowsBorder:(BOOL)arg1 ;
-(void)setAppStripSize:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

