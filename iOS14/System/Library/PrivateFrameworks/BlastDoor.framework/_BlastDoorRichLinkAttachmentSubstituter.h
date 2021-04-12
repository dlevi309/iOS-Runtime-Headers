/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface _BlastDoorRichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate> {

	BOOL _shouldSubstituteAttachments;
	BOOL _shouldIgnoreAppStoreMetadata;
	NSMutableArray* _archivedAttachments;
	NSArray* _attachmentsForUnarchiving;

}

@property (nonatomic,copy,readonly) NSMutableArray * archivedAttachments;              //@synthesize archivedAttachments=_archivedAttachments - In the implementation block
@property (nonatomic,copy) NSArray * attachmentsForUnarchiving;                        //@synthesize attachmentsForUnarchiving=_attachmentsForUnarchiving - In the implementation block
@property (assign,nonatomic) BOOL shouldSubstituteAttachments;                         //@synthesize shouldSubstituteAttachments=_shouldSubstituteAttachments - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAppStoreMetadata;                        //@synthesize shouldIgnoreAppStoreMetadata=_shouldIgnoreAppStoreMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(NSMutableArray *)archivedAttachments;
-(NSArray *)attachmentsForUnarchiving;
-(void)setAttachmentsForUnarchiving:(NSArray *)arg1 ;
-(BOOL)shouldSubstituteAttachments;
-(void)setShouldSubstituteAttachments:(BOOL)arg1 ;
-(BOOL)shouldIgnoreAppStoreMetadata;
-(void)setShouldIgnoreAppStoreMetadata:(BOOL)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
@end

