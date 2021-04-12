/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class CNContact, LPLinkMetadata, LPFileMetadata, NSString;

@interface CNShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource> {

	CNContact* _contact;
	LPLinkMetadata* _linkMetadata;
	LPFileMetadata* _fileMetadata;

}

@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,retain) LPFileMetadata * fileMetadata;              //@synthesize fileMetadata=_fileMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(LPLinkMetadata *)linkMetadata;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(LPFileMetadata *)fileMetadata;
-(void)setFileMetadata:(LPFileMetadata *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)thumbnailImage;
@end

