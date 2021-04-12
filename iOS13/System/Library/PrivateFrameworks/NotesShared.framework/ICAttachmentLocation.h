/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICLocation.h>
#import <libobjc.A.dylib/ICSearchIndexableTarget.h>

@class NSString, ICAttachment;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL placeUpdated; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,readonly) NSString * formattedAddressWithoutAttachmentTitle; 
+(id)newAttachmentLocationForAttachment:(id)arg1 ;
-(id)targetSearchIndexable;
-(NSString *)formattedAddressWithoutAttachmentTitle;
@end

