/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNote:(EDAMNote *)arg1 ;
-(NSNumber *)updated;
-(EDAMNote *)note;
-(void)setUpdated:(NSNumber *)arg1 ;
@end

