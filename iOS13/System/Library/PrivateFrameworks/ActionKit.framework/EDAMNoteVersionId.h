/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject {

	NSNumber* _updateSequenceNum;
	NSNumber* _updated;
	NSNumber* _saved;
	NSString* _title;
	NSNumber* _lastEditorId;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * saved;                          //@synthesize saved=_saved - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorId;                   //@synthesize lastEditorId=_lastEditorId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
-(void)setSaved:(NSNumber *)arg1 ;
-(NSNumber *)saved;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSNumber *)lastEditorId;
-(void)setLastEditorId:(NSNumber *)arg1 ;
@end

