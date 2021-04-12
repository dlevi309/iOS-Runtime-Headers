/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)actionProvider;
-(void)setActionProvider:(id)arg1 ;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id)previewProvider;
-(id<NSCopying>)identifier;
-(void)setPreviewProvider:(id)arg1 ;
@end

