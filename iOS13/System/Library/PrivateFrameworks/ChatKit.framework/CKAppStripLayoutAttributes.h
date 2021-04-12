/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)showsBorder;
-(long long)appStripSize;
-(void)setShowsBorder:(BOOL)arg1 ;
-(void)setAppStripSize:(long long)arg1 ;
@end

