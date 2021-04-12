/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextInteractableItem.h>

@class NSURL, LSAppLink;

@interface _UITextInteractableLink : _UITextInteractableItem {

	NSURL* _link;
	LSAppLink* _appLink;

}

@property (nonatomic,retain) NSURL * link;                     //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) LSAppLink * appLink;              //@synthesize appLink=_appLink - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(BOOL)isLink;
-(LSAppLink *)appLink;
-(void)setAppLink:(LSAppLink *)arg1 ;
@end

