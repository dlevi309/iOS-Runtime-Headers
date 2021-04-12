/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSCopying;
@interface UIContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	/*^block*/id _previewProvider;
	/*^block*/id _actionProvider;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id previewProvider;                    //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id actionProvider;                     //@synthesize actionProvider=_actionProvider - In the implementation block
+(id)configurationWithIdentifier:(id)arg1 previewProvider:(/*^block*/id)arg2 actionProvider:(/*^block*/id)arg3 ;
-(id<NSCopying>)identifier;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
-(void)setActionProvider:(id)arg1 ;
-(id)actionProvider;
@end

