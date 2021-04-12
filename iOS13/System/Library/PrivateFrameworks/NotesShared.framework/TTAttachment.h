/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/TTAttachment.h>

@protocol TTAttachment <TTModelAttributeComparable,NSObject>
@required
-(id)attachmentIdentifier;
-(id)attachmentUTI;
-(id)attachmentInContext:(id)arg1;

@end


@class NSString;

@interface TTAttachment : NSObject <TTAttachment> {

	NSString* _attachmentIdentifier;
	NSString* _attachmentUTI;

}

@property (nonatomic,retain) NSString * attachmentIdentifier;              //@synthesize attachmentIdentifier=_attachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * attachmentUTI;                     //@synthesize attachmentUTI=_attachmentUTI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAttachment:(id)arg1 equalToModelComparable:(id)arg2 ;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(NSString *)attachmentIdentifier;
-(NSString *)attachmentUTI;
-(id)attachmentInContext:(id)arg1 ;
-(void)setAttachmentIdentifier:(NSString *)arg1 ;
-(void)setAttachmentUTI:(NSString *)arg1 ;
@end

