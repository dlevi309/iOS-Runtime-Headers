/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMNote, NSNumber;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject {

	EDAMNote* _note;
	NSNumber* _updated;

}

@property (nonatomic,retain) EDAMNote * note;                 //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) NSNumber * updated;              //@synthesize updated=_updated - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMNote *)note;
-(void)setNote:(EDAMNote *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
@end

