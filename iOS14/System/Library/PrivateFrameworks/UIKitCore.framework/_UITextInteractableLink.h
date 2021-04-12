/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)link;
-(BOOL)isLink;
-(void)setLink:(NSURL *)arg1 ;
-(LSAppLink *)appLink;
-(void)setAppLink:(LSAppLink *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

