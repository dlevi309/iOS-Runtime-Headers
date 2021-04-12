/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject {

	NSNumber* _noSetReadNote;
	NSNumber* _noSetModifyNote;
	NSNumber* _noSetFullAccess;

}

@property (nonatomic,retain) NSNumber * noSetReadNote;                //@synthesize noSetReadNote=_noSetReadNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetModifyNote;              //@synthesize noSetModifyNote=_noSetModifyNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetFullAccess;              //@synthesize noSetFullAccess=_noSetFullAccess - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noSetFullAccess;
-(void)setNoSetFullAccess:(NSNumber *)arg1 ;
-(NSNumber *)noSetReadNote;
-(void)setNoSetReadNote:(NSNumber *)arg1 ;
-(NSNumber *)noSetModifyNote;
-(void)setNoSetModifyNote:(NSNumber *)arg1 ;
@end

